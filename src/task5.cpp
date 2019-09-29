#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {
	int i = 0;
	while (buf[i] != '\0') {
		if (buf[i] == ch) (*N)++;
		i++;
	}
	(*N) = (*N) + 1;
	char *temp = new char[i];
	(*result) = new char*[*N];
	i = 0;
	int n = 1;
	(*result)[0] = temp;
	while (buf[i] != '\0') {
		temp[i] = buf[i];
		if (buf[i] == ch) {
			(*result)[n] = temp + i + 1;
			temp[i] = '\0';
			n++;
		}
		i++;
	}
	temp[i] = '\0';
}