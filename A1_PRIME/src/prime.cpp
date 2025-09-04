#include <iostream>
#include <cmath>
#include "../include/prime.hpp"
//prime.cpp

// TODO: Implement isPrimeHalf
bool isPrimeHalf(int n, long long* modOps) {
    // Your implementation here
    // Checks for divisibility up to n/2
    // return true if n is prime else return false
    // count modulo operations when modOps is not nullptr
    // bool isPrime = true; 	//change if found to not be prime
	if(n < 1){
		//std :: cout<< "FLAG0" << *modOps <<std::endl;
		return false;
	}
	if(n == 1){
		//std :: cout<< "FLAG1" << *modOps <<std::endl;
		return true;
	}
	if(n % 2 == 0){
		//std :: cout<< "FLAGEVEN" <<*modOps <<std::endl;
		
		(*modOps)++;
		return false;
	}	
	for (int i = 3; i <= (n/2); i++){
    	float rem = n % i;
			
		(*modOps)++;

		//std :: cout<< "FLAGMOD" << *modOps <<std::endl;
		if(rem == 0){
			return false;	//Number divisible by something other than n/2
		}	
   	}
	//std :: cout<< "FLAGend" <<*modOps <<std::endl;
	return true;
}

// TODO: Implement isPrimeSqrt
bool isPrimeSqrt(int n, long long* modOps) {
    // Your implementation here
    //Checks for divisibility up to square root of n
    // return true if n is prime else return false
    // Remember to count modulo operations when modOps is not nullptr
	
	double squt = sqrt(n);
	//std :: cout << squt<<std::endl;
	if(n < 1){
		return false;
    }
    if(n == 1){
		return true;
	}
	if(n % 2 == 0){
		return false;
		(*modOps)++;
	}
	for(int i = 3; i <= squt; i++){
		float rem = n % i;
		(*modOps)++;
		//std :: cout<< "FLAGMOD" << *modOps <<std::endl;
		if(rem == 0){
			return false;
		}
	}
	return true;
}

// TODO: Implement countModOps
long long countModOps(PrimeFn isPrime, int lo, int hi) {
    // Your implementation here
    // This should call the provided isPrime function for each number in range [lo, hi]
    // and return the total number of modulo operations performed
    long long OpCount = 0;
	for(int i = lo; i <= hi; i++){
		isPrime(i, &OpCount);
	}
	return OpCount;

	
    

}
