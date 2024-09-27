//1267
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int test, i, time, Y_share = 1, Y_sum = 0, Y, M_share = 1, M_sum = 0, M;

	scanf("%d", &test);
	for (i = 0; i < test; i++) {
		scanf("%d", &time);
		
		Y_share = time / 30;
		Y_share++;
		Y = Y_share * 10;
		Y_sum += Y;

		M_share = time / 60;
		M_share++;
		M = M_share * 15;
		M_sum += M;
	}

	if (Y_sum > M_sum) {
		printf("M %d", M_sum);
	}
	else if (Y_sum == M_sum) {
		printf("Y M %d", Y_sum);
	}
	else {
		printf("Y %d", Y_sum);
	}

	return 0;
}