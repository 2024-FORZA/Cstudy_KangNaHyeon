//1769
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

long long cnt = 0; //함수 속 cnt를 main에서도 연동되게 

//각 자릿수 더하는 함수 (10^6자리라도, 처음 숫자를 제외하면 각 자릿수 합 최대: 9*10^7 < long long 타입 최댓값: 10^19 이므로 처음 다음부터는 숫자로 계산해도 무방)
long long digit_sum(long long n) {
	long long sum = 0;

	//n값을 10으로 나눈 나머지가 0이 될 때까지 각 자릿수 분리해서 sum에 더함
	while(n!=0){
		sum += (n % 10);
		n /= 10;
	}
	cnt++;

	return sum;
}

int main() {
	char num[1000001];
	long long sum = 0, len, i;

	scanf("%s", num);

	len = strlen(num);
	//처음 숫자만 문자로 받아서 ascii 코드값을 이용해 정수로 바꿈 (long long 타입 크기를 넘는 값 줄이기 위함)
	for (i = 0; i < len; i++) {
		sum += (num[i] - '0');
	}
	//1자리 수는 변형 없으니 cnt 포함X
	if (len > 1) {
		cnt++;
	}

	while (1) {
		//1자리 수는 변형 없으니 cnt 포함X
		if(len>1){
			//각 자릿수 더하는 행위는 반복되므로 함수로 처리 (2번째 변형부터는 정수로 해도 long long 크기 안넘음~)
			sum = digit_sum(sum);
		}
		
		//1의 자리면서 3의 배수일 때
		if ((sum < 10) && (sum % 3 == 0)) {
			printf("%lld\nYES", cnt);
			break;
		}
		//1의 자리면서 3의 배수가 아닐 때
		else if ((sum < 10) && (sum % 3 != 0)) {
			printf("%lld\nNO", cnt);
			break;
		}
	}

	return 0;
}

/*
정크값 나온 원인 찾은 방법

num 값이 정크값 따라서 num을 변형시키는 digit_sum 함수에서 문제가 있을 것
따라서 원인 고민의 폭을 digit_sum로 한정시킴. >> 아~ 함수 반환형을 int로 썼네~ (int -> long long으로 바꾸면서 빼먹었던 것~)
*/