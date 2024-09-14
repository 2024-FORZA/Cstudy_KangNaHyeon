//2839
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int i,j,min=5001,suger;


	scanf("%d", &suger);
	for (i = 0; 5 * i <= suger; i++) {
		for (j = 0; 3 * j <= suger; j++) {
			if (5 * i + 3 * j == suger) {
				if (min > i + j) {
					min = i + j;
				}
			}
		}
	}
	if (min != 5001) {
		printf("%d", min);
	}
	else {
		printf("%d", -1);
	}
	

	return 0;
}