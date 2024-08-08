//1010
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//조합 mCn 함수로 만든 것
int com(long long int m, long long int n) {
	long long int num=1, den=1, i,p;

	p = n;
	for (i = 0; i < p;i++) { //첨에 i<n이라고 둬서 n--에 영향 받음 >> 따라서 p에 n값 복사해두고 i<p로 바꾸는게 값 간 교란 없애는 방법임~
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
				printf("%lld", com(s2, s2-s1)); //조합의 특성 이용 n이 m의 절반보다 크면 mCn=mCm-n ex) 5C1=5C4
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