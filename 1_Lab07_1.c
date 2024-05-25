//2675
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, T, R[1000], j, p;
	char letter[1000][21];
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %s", &R[i], letter[i]);
	}
	for (i = 0; i < T; i++) {
		for (j = 0; j < strlen(letter[i]); j++) {
			for (p = 0; p < R[i]; p++) {
				printf("%c", letter[i][j]);
			}
		}
		if (i<(T-1)){
			printf("\n");
		}
		else {
			break;
		}
	}

	return 0;
}