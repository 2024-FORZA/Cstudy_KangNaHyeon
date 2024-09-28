//1110
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long num, original, cnt = 0, ten, one;

	//입력받은 숫자
	scanf("%lld", &num);
	original = num;
	//while문으로 num은 1자리 or 2자리로 변형되며 반복
	while(1){
		//1자리일 때 논리의 틀
		if (num < 10) {
			num = 11 * num; //num*10+num 정리한 것, 한자리일 때 앞에 0 붙이랬는데, 계산 시엔 이 과정 불필요해서 계산 시에만 0+num 일케 고려함 
			cnt++;
		}
		//2자리일 때 논리의 틀
		else {
			ten = num / 10;
			one = num % 10;

			num = one * 10 + (ten + one) % 10;
			cnt++;
		}

		//본래 num으로 돌아오면 break
		if (num == original) {
			break;
		}
	}

	printf("%lld", cnt);
	return 0;
}

//와...확실히 '먼저 논리 패드에 짜고 -> 코드로 구현' 하면 오답률 확 줄음~ (최근에는 코드 '짜면서' 논리 고민했더니 case 크게 못 나눠서 예외 일일이 처리해주느라 코드 길어졌었음...)
/*
(색각을 먼저 하니까 고려한 점)
- 큰 가지는 '입력받은 숫자'가 1자리 & 2자리로 나눠지는거로 해야겠다.
- 이때, '입력받은 숫자'는 while문을 통해 다시 같은 숫자가 나올 때까지, 변형되며 1자리 2자리를 반복할테니, 이들이 각자 '논리의 틀'에 들어가면 저절로 계산되게 해야겠다.
- 문제 다시 읽어서 1+2=12 일 때 122로 할 뻔한 거 22인거로 알아차림
*/