//1010
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� mCn �Լ��� ���� ��
int com(long long int m, long long int n) {
	long long int num=1, den=1, i,p;

	p = n;
	for (i = 0; i < p;i++) { //÷�� i<n�̶�� �ּ� n--�� ���� ���� >> ���� p�� n�� �����صΰ� i<p�� �ٲٴ°� �� �� ���� ���ִ� �����~
		num *= m;
		m --;

		den *= n;
		n --;
	}

	return (num/den);
}

int main() {
	long long int test, i, s1, s2, j;

	scanf("%lld", &test);
	for (i = 0; i < test; i++) {

		scanf("%lld %lld", &s1, &s2);

		if (s1 == s2) {
			printf("%lld", 1);
		}
		else {
			if (s2 / 2 < s1) {
				printf("%lld", com(s2, s2-s1)); //������ Ư�� �̿� n�� m�� ���ݺ��� ũ�� mCn=mCm-n ex) 5C1=5C4
			}
			else {
				printf("%lld", com(s2, s1));
			}
				
		}

		if (i != test - 1) {
			printf("\n");
		}
	}

	return 0;
}