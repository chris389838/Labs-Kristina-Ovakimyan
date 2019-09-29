#include "task2.h"

bool checkPrime(unsigned int value) {
	for (unsigned int i = 2; i <= sqrt(value); i++)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned long long  i = 2;
	unsigned long long  c = 0;
	while (c != n)
	{
		if (checkPrime(i))
		{
			c++;
			if (c == n) return i;
		}
		i++;
	}

}

unsigned long long nextPrime(unsigned long long value) {
	for (unsigned long long i = value + 1;; i++) {
		if (checkPrime(i)) return i;
	}
}
