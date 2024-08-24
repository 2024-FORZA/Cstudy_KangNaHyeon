//11653
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int num, n, i=0, j, n_arr[100000], original;

	scanf("%lld", &num);
	for (n = 2; n <= num; n++) { 
		while (1) {
			if (num % n == 0) {
				num /= n;
				n_arr[i] = n;
				i++;
			}
			else {
				break;
			}
		}
	}

	for (j = 0; j < i; j++) {
		printf("%lld", n_arr[j]);
		if (j != i - 1) {
			printf("\n");
		}
	}

	return 0;
}

/*
num값은 num/=n으로 계속 작아짐
문제점) n < num 으로하면 마지막에 남은 인수를 반영 못하게 됨
해결) n<=num으로 적어줘야 함. ex) 12를 2 2개로 나누면 num=3이고, n은 그 3을 반영해야하는데, n<num이면 3은 반영 못하고 끝나므로 n<=num이라고 해줘야 함
*/