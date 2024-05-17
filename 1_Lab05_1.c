//3052
#include <stdio.h>

int main()
{
	long long x[10], i, j, p = 0, k = 0;


	for (i = 0; i < 10; ++i) {
		scanf_s("%lld", &x[i]);
	}

	for (i = 0; i < 10; ++i) {
		for (j = i + 1; j < 10; ++j) {
			if (x[i] % 42 == x[j] % 42 && x[j] != -1) {
				p++;
				x[j] = -1;
			}
		}
	}
	printf("%lld", 10 - p);
	return 0;
}