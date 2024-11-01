//1100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROW 8
#define COL 8

int main() {
	char chess[ROW][COL+1];
	int i, j, cnt=0;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j <= COL; j++) { //'문자열'을 배열 취급하는 거라 마지막 NULL도 고려해야 했음 (안그러면 NULL이 다음 행의 첫번째 원소로 들어감..)
			scanf("%c", &chess[i][j]);
			if ((((i + j) % 2) == 0) && (chess[i][j] == 'F')) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}