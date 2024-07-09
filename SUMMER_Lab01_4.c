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
//백준에서만 틀렸대서 2일 고민하다 인터넷 찾아봄. 
//제일 큰 정수형 : long long 이 19자리까지 커버가능, 문제 속 A & B 범위 : 10000자리이하, 따라서 숫자로는 나타낼 수 없음
//따라서 A & B를 문자형으로 나타내고 후에 숫자로 바꾸는 것, A_num[p] * B_num[q]부터는 1자리끼리 곱하는 거라 여기서부터는 숫자 자료형으로 바꿔도 괜찮은 것.
//c언어에서는 ""는 문자열을, ''는 문자 1개를 나타냄 (어쩐지 B[j] == "8" 일케 쓰니까 '문자 1개와 문자열'을 비교하는 거라 계속 정크값 나옴, 문자 1개와 문자 1개를 비교하는 거니까 B[j] == '8' 일케 작은 따옴표 써줘야 했던 것)