#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "A1_PRIME/include/prime.hpp"




// Testing few prime identification

TEST_CASE("Testing Prime Identification", "[PRIMEFN]"){
    long long opsCount = 0;
    //testing half
    REQUIRE(isPrimeHalf(101, &opsCount) == true);
    REQUIRE(isPrimeHalf(211, &opsCount) == true);
    REQUIRE(isPrimeHalf(919, &opsCount) == true);
    //testing sqrt
    REQUIRE(isPrimeSqrt(101, &opsCount) == true);
    REQUIRE(isPrimeSqrt(211, &opsCount) == true);
    REQUIRE(isPrimeSqrt(919, &opsCount) == true);

}
//Testing composite numbers

TEST_CASE("Testing Prime Identification", "[PRIMEFN]"){
    long long opsCount = 0;
    //testing half
    REQUIRE(isPrimeHalf(289, &opsCount) == false);
    REQUIRE(isPrimeHalf(391, &opsCount) == false);
    REQUIRE(isPrimeHalf(667, &opsCount) == false);
    //testing sqrt
    REQUIRE(isPrimeSqrt(289, &opsCount) == false);
    REQUIRE(isPrimeSqrt(391, &opsCount) == false);
    REQUIRE(isPrimeSqrt(667, &opsCount) == false);

}
// test for few range of prime numbers if both methods are consistent
// TEST_CASE("Testing range of prines","[PRIMEFNFR]"){

//     REQUIRE()
// }
// Testing mod operation counts

// test edge cases
