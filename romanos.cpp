#include "romanos.hpp"
#include <unordered_map>
#include <string>


int romano_para_decimal(const std::string& romano) {
    std::unordered_map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    for (char num : romano) {
        result += valores[num];
    }

    return result;
}