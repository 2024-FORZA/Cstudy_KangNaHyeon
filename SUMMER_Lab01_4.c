//1225
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char A[10001], B[10001];
	long long int C[10001],D[10001], i, j, p, q, sum = 0;

	scanf("%s %s", A, B);

	for (i = 0; i < strlen(A); i++) {
		if (A[i] == '0') {
			C[i] = 0;
		}
		else if (A[i] == '1') {
			C[i] = 1;
		}
		else if (A[i] == '2') {
			C[i] = 2;
		}
		else if (A[i] == '3') {
			C[i] = 3;
		}
		else if (A[i] == '4') {
			C[i] = 4;
		}
		else if (A[i] == '5') {
			C[i] = 5;
		}
		else if (A[i] == '6') {
			C[i] = 6;
		}
		else if (A[i] == '7') {
			C[i] = 7;
		}
		else if (A[i] == '8') {
			C[i] = 8;
		}
		else if (A[i] == '9') {
			C[i] = 9;
		}
	}

	for (j = 0; j < strlen(B); j++) {
		if (B[j] == '0') {
			D[j] = 0;
		}
		else if (B[j] == '1') {
			D[j] = 1;
		}
		else if (B[j] == '2') {
			D[j] = 2;
		}
		else if (B[j] == '3') {
			D[j] = 3;
		}
		else if (B[j] == '4') {
			D[j] = 4;
		}
		else if (B[j] == '5') {
			D[j] = 5;
		}
		else if (B[j] == '6') {
			D[j] = 6;
		}
		else if (B[j] == '7') {
			D[j] = 7;
		}
		else if (B[j] == '8') {
			D[j] = 8;
		}
		else if (B[j] == '9') {
			D[j] = 9;
		}
	}

	for (p = 0; p < i; p++) {
		for (q = 0; q < j; q++) {
			sum += C[p] *D[q];
		}
	}
	printf("%lld", sum);
	return 0;
}
//���ؿ����� Ʋ�ȴ뼭 2�� ����ϴ� ���ͳ� ã�ƺ�. 
//���� ū ������ : long long �� 19�ڸ����� Ŀ������, ���� �� A & B ���� : 10000�ڸ�����, ���� ���ڷδ� ��Ÿ�� �� ����
//���� A & B�� ���������� ��Ÿ���� �Ŀ� ���ڷ� �ٲٴ� ��, A_num[p] * B_num[q]���ʹ� 1�ڸ����� ���ϴ� �Ŷ� ���⼭���ʹ� ���� �ڷ������� �ٲ㵵 ������ ��.
//c������ ""�� ���ڿ���, ''�� ���� 1���� ��Ÿ�� (��¾�� B[j] == "8" ���� ���ϱ� '���� 1���� ���ڿ�'�� ���ϴ� �Ŷ� ��� ��ũ�� ����, ���� 1���� ���� 1���� ���ϴ� �Ŵϱ� B[j] == '8' ���� ���� ����ǥ ����� �ߴ� ��)