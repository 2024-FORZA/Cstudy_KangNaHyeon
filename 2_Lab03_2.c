//2466
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k, i, j;

	scanf("%d", &n);
	k = n; //상수 취급, 변화하는 k
	for (i = 0; i < 2 * n - 1; i++) {
		for (j = 0; j < n - k; j++) {
			printf(" ");
		}
		
		for (j = 0; j < 2 * k - 1; j++) {
			printf("*");
		}
		if (i < n-1) {
			k -= 1;
		}
		else {
			k += 1;
		}

		if (i != 2 * n-2) {
			printf("\n");
		}
	}

	return 0;
}