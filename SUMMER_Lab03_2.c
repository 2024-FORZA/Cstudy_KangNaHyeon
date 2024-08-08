//10818
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int times, i, num, max=-1000001, min= 1000001;

	scanf("%lld",&times);
	for (i = 0; i < times; i++) {
		scanf("%lld", &num);

		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}
	printf("%lld %lld", min, max);

	return 0;
}
