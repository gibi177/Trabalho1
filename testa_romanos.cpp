#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {

    SECTION ("Romanos basicos") {
        
        REQUIRE(romano_para_decimal('I') == 1);
        REQUIRE(romano_para_decimal('V') == 5);
        REQUIRE(romano_para_decimal('X') == 10);
        REQUIRE(romano_para_decimal('L') == 50);
        REQUIRE(romano_para_decimal('C') == 100);
        REQUIRE(romano_para_decimal('D') == 500);
        REQUIRE(romano_para_decimal('M') == 1000);
    }
}