//1100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROW 8
#define COL 8

int main() {
	char chess[ROW][COL+1];
	int i, j, cnt=0;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j <= COL; j++) { //'���ڿ�'�� �迭 ����ϴ� �Ŷ� ������ NULL�� ����ؾ� ���� (�ȱ׷��� NULL�� ���� ���� ù��° ���ҷ� ��..)
			scanf("%c", &chess[i][j]);
			if ((((i + j) % 2) == 0) && (chess[i][j] == 'F')) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}