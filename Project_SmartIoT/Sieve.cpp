#include <math.h>
#include <iostream>

using namespace std;
/*
 C++ program to print all primes smaller than or equal to n using Sieve of Eratosthenes
 Method takes the maximum number to which primes need to be found
 Method that returns array of prime numbers
*/
int * sieve(int n)
{
	int * primes = new int[n - 2];
	int *onlyPrimes{
		new int[n - 2] {0}
	};

	//initialize array with integers from 2 to n
	for (int i = 2; i <= n; i++)
	{
		primes[i - 2] = i;
	}
	/*
		loop over array and
		Mark all numbers which is multiple of variable i and less than the ‘limit’ as zero.
		Update value of i as the next unmarked number.
	*/
	int nonPrimeSizeCounter = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (primes[i - 2] == i)
		{
			for (int j = 2; i*j <= n; j++)
			{
				if (primes[(i*j) - 2] != 0)
				{
					primes[(i*j) - 2] = 0;
					nonPrimeSizeCounter++;
				}
			}
		}
	}
	cout << "Total primes : " << n - nonPrimeSizeCounter << endl;

	// write all prime numbers into a array to return
	int primeCount = 0;
	for (int p = 0; p <= n; p++) {
		if (primes[p])
		{
			onlyPrimes[primeCount++] = primes[p];
		}
	}
	//loop to print prime numbers
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl;
	for (int i = 0; i < primeCount - 2; i++)
	{
		cout << onlyPrimes[i] << " ";
	}
	return onlyPrimes;
}


