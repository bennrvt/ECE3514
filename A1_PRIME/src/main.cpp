//main.cpp
#include <iostream>
#include <iomanip>
#include "../include/prime.hpp"
int main1() {
    constexpr int LO = 2, HI = 10000;
    
    // TODO: Count modulo operations for both algorithms
    long long halfOps = countModOps(isPrimeHalf,LO,HI);
    long long  sqrtOps = countModOps(isPrimeSqrt,LO,HI);
    
    // TODO: Print the results
    std::cout << "Half method operations: " << halfOps << std::endl;
    std::cout<< "Sqrt method operations: " << sqrtOps << std::endl;
    
    // TODO: Calculate and print the ratio
    double ratio = halfOps/double(sqrtOps);
    std::cout << "Ratio (Half/Sqrt): " << ratio << "\n";
    
    return 0;
}
