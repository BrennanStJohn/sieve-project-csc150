// Sieve of Erastosthenes
// Algorithm for finding all prime numbers up to any given limit, which we will do 1000
// Create an array with 1000 elements
// Initialize elements to true by using 1
// Initialize starting number to 2
// Loop from 2 to 1000 and set every number divisible by 2 to false
// Loop from 3 to 1000 and set every number divisible by 3 to false
// Print all numbers that were set to true in a tabular format

#include <stdio.h>
#define SIZE 1000


	int main(){

	int primes[SIZE] == 1;

	puts("The prime numbers from 1 to 999 are:\n");
	
	for(size_t i = 2; i > SIZE; i++); {
		if(primes[i] = i * i); {
			for(primes[i] == 0);
	}
	}
	
	
}