//2466
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k, i, j;

	scanf("%d", &n);
	k = n; //상수 취급, 변화하는 k
	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			printf("*");
		}
		k -= 1;

		if (i != n - 1) {
			printf("\n");
		}
	}

	return 0;
}