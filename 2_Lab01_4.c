//5347
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	long long int test, i, num1, num2, j, answer=1;

	scanf("%lld", &test);
	for (i = 0; i < test; i++) {
		scanf("%lld %lld", &num1, &num2);

		//최소공배수는 두 숫자의 인수들 중 최대 인수를 가져오면 된다.
		j = 2;
		answer = 1;
		while (j<=num1 || j<=num2) { //오름차순으로 num1, num2 인수 찾는 것
			while(num1 % j == 0 || num2 % j == 0){
				answer *= j; //인수를 찾는대로 곱한다.
				if(num1 % j == 0){ //찾은 인수를 계산에서 제외시킨다.
					num1 /= j;
				}
				if (num2 % j == 0) { //찾은 인수를 계산에서 제외시킨다.
					num2 /= j;
				}
			}
			j++;
		}
		printf("%lld", answer);
		if (i != test) {
			printf("\n");
		}
	}

	return 0;
}