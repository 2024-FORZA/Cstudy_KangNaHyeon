//5622
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char letter[2][16];
	long long num[16];
	long long sum=0, i=0,j,k;

	scanf("%s", letter[0]);
	for (j = 0; j < 16; j++){
		if (letter[0][j] == 'A' || letter[0][j] == 'B' || letter[0][j] == 'C'){
			num[j] = 3;
		}
		else if (letter[0][j] == 'D' || letter[0][j] == 'E' || letter[0][j] == 'F') {
			num[j] = 4;
		}
		else if (letter[0][j] == 'G' || letter[0][j] == 'H' || letter[0][j] == 'I') {
			num[j] = 5;
		}
		else if (letter[0][j] == 'J' || letter[0][j] == 'K' || letter[0][j] == 'L') {
			num[j] = 6;
		}
		else if (letter[0][j] == 'M' || letter[0][j] == 'N' || letter[0][j] == 'O') {
			num[j] = 7;
		}
		else if (letter[0][j] == 'P' || letter[0][j] == 'Q' || letter[0][j] == 'R' || letter[0][j] == 'S') {
			num[j] = 8;
		}
		else if (letter[0][j] == 'T' || letter[0][j] == 'U' || letter[0][j] == 'V') {
			num[j] = 9;
		}
		else if (letter[0][j] == 'W' || letter[0][j] == 'X' || letter[0][j] == 'Y' || letter[0][j] == 'Z') {
			num[j] = 10;
		}
		else {
			num[j] = 0;
		}
	}

	for (k = 0; k < 17&&num[k]!=0; k++) {
		sum += num[k];
	}

	printf("%lld", sum);
	
	return 0;
}

//else �ȽἭ ��ũ������ �迭 num�� ä������ ��
//���� ������ : �ڵ� ���� ���� ��ġ�� printf("$d",1)�̷� �� ������ ���� �ľǿ� ���� (���� ���� �ľǵ� �̷��� ��)
//����� ��Ʃ����� �´µ� ���ؿ��� Ʋ�ȴ� >> �ڷ����� �ÿ����� ('C��� ���� ����' ����)