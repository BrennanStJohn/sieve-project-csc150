// Sieve of Erastosthenes
// Algorithm for finding all prime numbers up to any given limit, which we will do 1000
// Create an array with 1000 elements
// Create loop through 2-1000 and make variable
// Initialize variable to 2 for looping
// Create a loop that only runs while a number can multiply against itself
// Set other numbers to 0 if they cannot be a multiple of themselves
// Create another loop to print the numbers that aren't 0, which should equal prime numbers
// Figure out a way to format printed prime numbers to only print 10 per line and create a new line
// Should print all prime numbers in tabular format



#include <stdio.h>
#define SIZE 1000 // making size equal 1000

	int main() {
	int primes[SIZE]; //array of 1000
	int count = 0;
	
	puts("The prime numbers from 1 to 999 are:\n"); //introduction and purpose
	
	for(int i = 2; i <= SIZE; i++) { // creating i variable for the while loop from array
		primes[i] = i;	
	}
	
	int i = 2; // i is 2 because 1 is not a prime number
	
	while((i*i) <= SIZE) { // performs loop when a number multiplies against itself, up to 1000
		if (primes[i] != 0) { // ensures number does not equal 0
			for(int x = 2; x < SIZE; x++) { // loops from 2 - 1000
				if(primes[i]*x > SIZE) { // multiplies array against x up to 999 and loops back when same
				}
				else 
				primes[primes[i]*x] = 0; // excludes numbers that can't be multiplied by themselves and sets them to 0
	
			}
		}
	i++; // increments i in while loop
	}
	
		for(int i = 2; i <= SIZE; i++) { // looping results to print, up to 1000
			if (primes[i] != 0) { // excludes numbers that equal 0 
				printf("%d\t", primes[i]);
				count++;
				if (count % 10 == 0) // creates tabular format by counting 10 integers
					printf("\n"); // prints new line every 10 integers
			
			}
		}
	
	}
	