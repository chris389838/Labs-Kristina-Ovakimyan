#include "task1.h"

int main() {
	unsigned int min, max;
	std::cout << "MIN = ";
	std::cin >> min;
	std::cout << "MAX = ";
	std::cin >> max;
	unsigned long res = findValue(min, max);
	std::cout << res;
}