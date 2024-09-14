//2581
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long num1, num2, num, i, sum=0, cnt = 0, min = 10001;

	scanf("%lld %lld", &num1, &num2);
	for (num = num1; num <= num2; num++) {
		cnt = 0; //반복문에서 재사용되는 변수 초기화 중요
		for (i = 2; i <= num / 2; i++) { //약수들 특성상 본인이 아닌 가장 큰 약수는 num을 2로 나눈 수보다 작거나 같음 (2가 제일 작은 약수일 수 있는데, 그와 짝을 짓는 수가 제일 큰 본인이 아닌 약수일 것이기 때문, 1.5가 약수일 순 없잖아~~) ex) 1 2 3 6, 1 3 7 21 (3,7 모두 이러한 특징 가짐)
			if (num % i == 0) {
				cnt++; //num을 약분하는 수가 없는지 전체를 돌아야 하니까 cnt++로 '흔적 남기는 것'
			}
		}
		if (cnt == 0 && num!=1) { //cnt++로 약분된 흔적 없으면 소수로 판정, 아예 1일 때 케이스 sum, min 따지는 과정에서 없애는 거로 함
			sum += num;
			if (min > num) {
				min = num;
			}
		}
	}
	
	if (min == 10001) {
		printf("-1");
	}
	else{
		printf("%lld\n%lld", sum, min);
	}

	return 0;
}

/*
오... 1은 소수가 아니었다... (수학적 개념 오류로 논리 오류남...)

>>거기에 1일 때 처리 조건을 num+1로 해서 1 1 입력하면 2 2 로 결과 나오는 오류남..
>>아예 1일 때 케이스 sum, min 따지는 과정에서 없애는 거로 함
*/