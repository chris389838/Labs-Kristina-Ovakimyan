#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) {
	unsigned long d = min;
	auto a = 0;
	auto b = 0;
	auto temp = 0;
	for (unsigned int i = min; i < max; i++) {
		a = d;
		b = i;
		while (a != b) {
			temp = a - b;
			if (temp > 0) 
				a = a - b;
			else
				b = b - a;
		}
		d = d * i / a;
	}
	return d;
}