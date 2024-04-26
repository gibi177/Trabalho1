#include "romanos.hpp"
#include <unordered_map>
#include <string>
#include <set>
#include <regex>


// Checa validade usando expressoes regulares
bool check_invalid_expression(std::string romano) {
    std::regex pattern("^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$");

    return regex_match(romano, pattern);
}


int romano_para_decimal(const std::string& romano) {
    // Verifica string vazia ou expressao invalida
    if (romano.empty() || !check_invalid_expression(romano)) {
        return -1;
    }

    std::unordered_map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    std::set<char> validChars = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

    int result = 0;
    int size = romano.size();

    for (int i = 0; i < size; ++i) {                                // ++i incrementa a contadora i
        char current = romano[i];

        if (validChars.find(current) == validChars.end()) {         // Se nao achar caractere atual
            return -1;                                              // caractere atual nao e romano valido
        }  

        int value = valores[romano[i]];                             // Ex: XXI, quando i=0, value=10
                                     
        if (i + 1 < size && valores[romano[i + 1]] > value) {       // Se prox char existe e é maior que o anterior
            result -= value;
        } else {
            result += value;
        }
    }

    return result;
}
