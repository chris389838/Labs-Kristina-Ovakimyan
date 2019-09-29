#include "task4.h"

std::vector<short> V(char *a) {
	std::vector<short> vec;
	int i = 0;
	while (a[i] != '\0') {
		vec.push_back((short)(a[i] - 48));
		i++;
	}
	reverse(vec.begin(), vec.end());
	return vec;
}

char * sum(char *x, char *y) {
	std::vector<short> _x = V(x);
	std::vector<short> _y = V(y);
	std::vector<short> res;
	short r = 0;
	for (int i = 0; i < std::max(_x.size(), _y.size()); i++) {
		short cur = 0;
		if (i < _x.size())
			cur += _x[i];
		if (i < _y.size())
			cur += _y[i];
		res.push_back((short)((r + cur) % 10));
		r = (short)((r + cur) / 10);
	}
	if (r != 0)
		res.push_back(r);
	char *sum = new char[res.size() + 1];
	for (int i = res.size() - 1; i >= 0; i--)
		sum[res.size() - 1 - i] = (char)(res[i] + 48);
	sum[res.size()] = '\0';
	return sum;
}