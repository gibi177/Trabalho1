#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "romanos.hpp"

TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {
    REQUIRE(romano_para_decimal("I") == 1);
    REQUIRE(romano_para_decimal("V") == 5);
    REQUIRE(romano_para_decimal("X") == 10);
    REQUIRE(romano_para_decimal("L") == 50);
    REQUIRE(romano_para_decimal("C") == 100);
    REQUIRE(romano_para_decimal("D") == 500);
    REQUIRE(romano_para_decimal("M") == 1000);
}

TEST_CASE("Romano seguido por um romano igual", "[romanos]") {
    REQUIRE(romano_para_decimal("III") == 3);
    REQUIRE(romano_para_decimal("XX") == 20);
    REQUIRE(romano_para_decimal("CCC") == 300);
    REQUIRE(romano_para_decimal("MM") == 2000);
}
