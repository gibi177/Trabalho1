#include "romanos.hpp"
#include <unordered_map>
#include <string>


int romano_para_decimal(const std::string& romano) {
    std::unordered_map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    int size = romano.size();

    for (int i = 0; i < size; ++i) {                                //++i incrementa a contadora i
        int value = valores[romano[i]];                             //Ex: XXI, quando i=0, value=10
        
        if (i + 1 < size && valores[romano[i + 1]] > value) {       //Se prox char existe e é maior que o anterior
            result -= value; 
        } else {
            result += value;
        }
    }

    return result;
}