// Sieve of Erastosthenes
// Algorithm for finding all prime numbers up to any given limit, which we will do 1000
// Create an array with 1000 elements
// 
// Initialize starting number to 2
// Loop
// Loop from 3 to 1000 and set every number divisible by 3 to false
// Print all numbers that were set to true in a tabular format

#include <stdio.h>
#define SIZE 999


	int main() {
	int primes[SIZE];

	puts("The prime numbers from 1 to 999 are:\n");
	
	for(int i = 2; i <= SIZE; i++) {
		primes[i] = i;	
	}
	
	int i = 2;
	
	while((i*i) <= SIZE) {
		if (primes[i] != 0) {
			for(int x = 2; x < SIZE; x++) {
				if(primes[i]*x > SIZE) {
					break;
				}
				else 
					primes[primes[i]*x] = 0;
	
	}
	}
	i++;
	}
	
	
	
	
	for(int i = 2; i <= SIZE; i++) {
			if (primes[i] != 0) {
				printf("%d\t", primes[i]);
			}
	}
	
}
