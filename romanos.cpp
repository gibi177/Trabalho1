#include "romanos.hpp"
#include <unordered_map>


int romano_para_decimal(char romano) {
    std::unordered_map<char, int> valores = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    return valores[romano];
}