#include "task5.h"

int main() {
	char a[] = "123,456,789";
	char *buf = a;
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	std::cout << "N=" << N << std::endl;
	for (int i = 0; i < N; i++) {
		std::cout << "result[" << i << "]=" << result[i] << std::endl;
	}
}