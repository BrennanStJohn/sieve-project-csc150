// Sieve of Erastosthenes
// Algorithm for finding all prime numbers up to any given limit, which we will do 1000
// Create an array with 1000 elements
// 
// Initialize starting number to 2
// Loop
// 
// Print all numbers that are not changecd to 0
// Printed numbers will be prime
// Create loop to give tabular formatting

#include <stdio.h>
#define SIZE 999 //0-999


	int main() {
	int primes[SIZE]; //array with 1000
	int count = 0; 
	
	puts("The prime numbers from 1 to 999 are:\n"); //introduction and purpose
	
	for(int i = 2; i <= SIZE; i++) { //creating the list of numbers 2-1000
		primes[i] = i;	
	}
	
	int i = 2;
	
	while((i*i) <= SIZE) { // performs loop when a number multiplies against itself, up to 999
		if (primes[i] != 0) { // ensures number does not equal 0
			for(int x = 2; x < SIZE; x++) { // loops 
				if(primes[i]*x > SIZE) { // loops up to 999 and multiplies against itself
				}
				else 
					primes[primes[i]*x] = 0; //
	
	}
	}
	i++;
	}
	
		
		
		for(int i = 2; i <= SIZE; i++) { // looping results to print
			if (primes[i] != 0) {// excludes numbers that equal 0 
			printf("%d ", primes[i]);
				if (count == 10)
				break;
				count++;
			}
		}
	
	
	}
	