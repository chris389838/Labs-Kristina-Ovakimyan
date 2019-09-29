#include "task2.h"

int main() {
	int value;
	std::cout << "Enter value: ";
	std::cin >> value;
	std::cout << "The value is Prime   " << checkPrime(value) << std::endl;
	std::cout << "The n -  prime value is   " << nPrime(value) << std::endl;
	std::cout << "The next prime value is   " << nextPrime(value) << std::endl;
}