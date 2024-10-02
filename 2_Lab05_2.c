//1526
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long num, temp, error, target;

	scanf("%lld", &num);

	//num보다 작은 4 또는 7로 된 값, num값에 -1 하면서 1개씩 일일이 따지는 것
	for (target = num;;target--) {
		error = 0;
		temp=target;
		//num이 2자리수 이상일 때 (2자리수 이상이면, 1자리수가 되었을 때 4 또는 7인지 파악하면 되는데..)
		if (target >= 10) {
			while (1) {
				//4또는 7로 이루어진 값 아니면 break 치고 다음 값 따지기
				if (temp % 10 != 4 && temp % 10 != 7) {
					error++;
					break;
				}
				//4 또는 7로 이루어진 값이면, 10으로 나눠서 나머지 자리의 숫자도 따져주기
				temp /= 10;

				//10보다 작아졌을 때 break문 쓸 조건 마땅치 않아서 걍 한번 더 적어줌
				if (temp < 10) {
					if (temp % 10 != 4 && temp % 10 != 7) {
						error++;
					}
					break; //break가 위에 if문에 들어가면 4,7로 이루어진 경우는 무한루프 돎~ 따라서 위의 if문 밖에 break문 둬야 1의 자리 따져주고 멈춤~
				}
			}
		}
		//num이 1자리수 일 때는 num자체에서 10을 나누는게 아닌 -1을 해서 7 또는 4 찾아야 해서 로직이 다름~ (따라서 num이 1의 자리수일 때와 2자리 넘길 때 case 나눠줘야 함)
		else {
			if (target == 7 || target == 4) {
				printf("%lld", target);
				break;
			}
			else {
				error++;
			}
		}
		//4 또는 7로만 이루어진 숫자라면 해당 숫자 출력
		if (error == 0) {
			printf("%lld", target);
			break;
		}
	}

	return 0;
}

//디버깅 적극적으로 사용함. 특히 조사식
/*
(문풀 후 식이 좀 더러워서 챗gpt한테 외부 라이브러리 없이 기본적인 개념으로만 푼 풀이 보여달라고 함)

while (num > 0) {
	num /= 10;  // 다음 자릿수로 이동
}

나는 4/10=4라고 생각해서 코드 쓸데없이 길게 적음...4/10=0임... 4%10=4 인거랑 헷갈렸음...
//내가 적은 코드는 쓸데없이 case를 많이 나눔 ('1의 자리 기준', '/인데 1의 자리 기준(%랑 헷갈린 것...)' 나눈 것...)
//효율성 높인 코드는 2_Lab05_2_수정에 적어둠~
*/