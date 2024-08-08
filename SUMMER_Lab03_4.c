//1598
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long int num1, num2, n, x1, x2, y1, y2,xlen,ylen;

	scanf("%ld %ld", &num1, &num2);
	for (n = 1;; n++) {  //for(초기값;break식;조건문) >> 따라서 가온데 break문 없애서 무한 루프 for문 만들면 됨
		if (4 * n - 3 == num1) {
			x1 = n;
			y1 = 4;
			break;
		}
		if (4 * n - 2 == num1) {
			x1 = n;
			y1 = 3;
			break;
		}
		if (4 * n - 1 == num1) {
			x1 = n;
			y1 = 2;
			break;
		}
		if (4 * n == num1) {
			x1 = n;
			y1 = 1;
			break;
		}
	}

	for (n = 1;; n++) {
		if (4*n - 3 == num2) {
			x2 = n;
			y2 = 4;
			break;
		}
		if (4*n - 2 == num2) {
			x2 = n;
			y2 = 3;
			break;
		}
		if (4*n - 1 == num2) {
			x2 = n;
			y2 = 2;
			break;
		}
		if (4*n == num2) {
			x2 = n;
			y2 = 1;
			break;
		}
	}

	xlen = x1 - x2;
	ylen = y1 - y2;

	//절댓값 씌워주는 것
	if (x1 - x2 < 0) {
		xlen = -(x1 - x2);
	}
	if (y1 - y2 < 0) {
		ylen = -(y1 - y2);
	}

	printf("%ld", xlen + ylen);

	return 0;
}

/*
(기본 아이디어)
좌표평면으로 보겠다. (n은 x값, y는 1,2,3,4 중 하나임)
표에서 가로는 공차가 4인 등차수열이다. 따라서 점화식으로 모든 가로값을 표기할 수 있다 ex) 4n-3, 4n-2, 4n-1, 4n
표에서 세로는 1,2,3,4 로 한정되어 있다. 따라서 위의 점화식에 따라 y값을 1,2,3,4로 지정해주면 된다.

이렇게 10000000까지 나타낼 거니까 for 무한루프 '(~;;~)꼴' 만들어서 n값 찾는대로 for문 break치게 끔 논리 설계함
*/