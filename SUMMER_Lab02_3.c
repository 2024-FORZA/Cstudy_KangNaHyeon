//11005
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int num, N, remainder, i = 0,j, result[31] = {-1};

	scanf("%lld %lld", &num, &N);
	while (1) { //if 나뉘는 기준: num이 N보다 큰지 작은지 혹은 remainder가 10보다 크거나 작은지
		//num >= N일 때 num을 계속 나눠서 나머지 result에 담기게 함
		if (num >= N) {
			remainder = num % N;
			//나머지가 10보다 클 때는 새로운 숫자 형태 써야 함
			if (remainder >= 10) { //remainder >= 10 를 num >= 10로 써서 오류났었음
				remainder += 55; //ascii코드 특징 이용한 것 (10>>65(ascii코드에서 'A'))
				result[i]=remainder;
			}

			//나머지가 10보다 작을 때는 원래 숫자의 형태 쓰면 되니까 그대로 result에 담기게 함
			else {
				result[i] = remainder;
			}
			num = num / N;
			i++;
		}

		//num >= N 로는 마지막 남은 나머지값 계산 안되서 따로 빼냄
		else {
			//나머지가 10보다 클 때는 새로운 숫자 형태 써야 함
			if (num >= 10) { //num<N일 때는 num 자체가 remainder와 동치이므로 걍 num 씀.
				num += 55; //ascii코드 특징 이용한 것 (10>>65(ascii코드에서 'A'))
				result[i] = num;
				break;
			}

			//나머지가 10보다 작을 때는 원래 숫자의 형태 쓰면 되니까 그대로 result에 담기게 함
			else {
				result[i] = num;
				break;
			}
		}
	}

	//진법 변환은 나머지 구한거 역으로 출력한게 답이니까 역으로 출력하게 함
	for (j = i; j >= 0; j--) {
		if (result[j] >= 10) {
			printf("%c", result[j]);
		}
		else {
			printf("%lld", result[j]);
		}
	}

	return 0;
}
/*
(char형 변수 특징)
1. char형 변수는 문자의 'ASCII 코드 값(정수)'으로 저장됨
2. 연산 시: 내부적으로는 ‘ASCII 코드 값(정수)’으로 연산됨
3. 출력 시: ‘포맷 지정자에 따라’ ‘ascii 코드에 해당하는 문자나 정수’로 출력할 수 있음
ex)	char ch = 'A';
	int num = ch + 1; // 'A'의 ASCII 값 65에 1을 더함
	printf("%c\n", num); // 'B' 출력 ****이거 이용한것****
	printf("%d\n", num); // 66 출력

(이 특징 사용의 다른 예)
char를 int로 바꾸는 법 ex) 바꾸려는 문자-'0' >> ‘1’-'0'
*/

/*
(최대한 중복되는 부분은 줄이려고 함)
ex)
	remainder = num % N;
	if (remainder >= 10) { //remainder >= 10 를 num >= 10로 써서 오류났었음
		remainder += 55; //ascii코드 특징 이용한 것 (10>>65(ascii코드에서 'A'))
		result[i]=remainder;
	}
	else {
		result[i] = remainder;
	}
	num = num / N;
	i++;

원래는 
remainder = num % N;
num = num / N;
i++;
가 if & else문 안에 들어가게 코드 짰었음 (쓸데없는 중복 연산이라 뻄)
*/