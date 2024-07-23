//1735
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, denom1, num2, denom2, num3, denom3, i, j, n, c;

	scanf("%d %d", &num1, &denom1);
	scanf("%d %d", &num2, &denom2);

	num3 = num1 * denom2 + num2 * denom1;
	denom3 = denom1 * denom2;

	//(제일 바깥 if, else 나눈 이유) 분모가 클 때, 분자가 클 때 범위를 나눔으로서 n의 시작이 '분모와 분자 중 작은 수'로 되게 함(비교적 작은 수부터 따지기 시작하므로 시간 절약 가능)
	//num3와 denom3의 최소공배수(n) 구하는 과정: num3보다 작은 값 중 하나는 최소공배수일 것이므로~
	if (num3 <= denom3) {
		for (n = num3; n >= 1; n--) { //n이 -1되게 위에서부터 아래로 훑음으로서 n에 해당하는 거 찾으면 바로 break 걸고 반복문 종료시킴 (끝까지 안훑어도 되서 시간 절약됨)
			if (num3 % n == 0 && denom3 % n == 0) {
				c = n;
				break;
			}
		}
	}
	//num3와 denom3의 최소공배수(n) 구하는 과정: denom3보다 작은 값 중 하나는 최소공배수일 것이므로~
	else {
		for (n = denom3; n >= 1; n--) { //n이 -1되게 위에서부터 아래로 훑음으로서 n에 해당하는 거 찾으면 바로 break 걸고 반복문 종료시킴 (끝까지 안훑어도 되서 시간 절약됨)
			if (num3 % n == 0 && denom3 % n == 0) {
				c = n;
				break;
			}
		}
	}
	i = num3 / c;
	j = denom3 / c;

	printf("%d %d", i, j);

	return 0;
}

//(problem) 논리는 맞았는데 시간초과 계속 걸림
/*
(solution)
기존 코드: 
1) 맨 바깥 if else 범위 안 나눠서 불필요하게 많이 셈 ex) 분자가 더 클 때 n=분자 로 뒀어서 n=분모(더 작은 값)까지만 세도 됐을 것을 불필요하게 더 세버림 (시간 낭비) 
2) 반복문에 기약분수 분자,분모(i,j) 구하는 나눗셈 산수식을 넣었음 (n이 확정되지 않은 상태에서 계산까지 하게 함..시간낭비)
3) n이 +1되며 아래서부터 최대공약수 찾아 올라가는 형태라 num3 혹은 denum3 까지 다 따졌어야 했음

시간 줄인 코드: 
1) 분모가 클 때, 분자가 클 때 범위를 나눔으로서 n의 시작이 '분모와 분자 중 작은 수'로 되게 함 (비교적 작은 수부터 따지기 시작하므로 시간 절약 가능)
2) 반복문은 'n값' 찾는데만 사용
3) n이 -1되게 위에서부터 아래로 훑음으로서 n에 해당하는 거 찾으면 바로 break 걸고 반복문 종료시킴 (끝까지 안훑어도 되서 시간 절약됨)
*/