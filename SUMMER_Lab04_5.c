//4539
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int test, i,p, num,j = 0, result[100000];
	
	scanf("%lld", &test);
	for (i = 0; i < test; i++) {
		scanf("%lld", &num);
		j = 0; //반복문에서 초기화 중요 (안 그러면 j 누적되서 논리오류남)
		if(num>10){ //num이 10보다 클 때만 추가 조건 필요
			while(num!=num%10) { //num이 10보다 클 떄, 100보다 클 때,,,, '반복'되는 조건들 '반복'문으로 표시해둔 것 (느낌 잡기, 일일이 나열 ㄴㄴ)
				if (num % 10 >= 5) { //반올림
					result[j] = 0;
					num /= 10;
					num++;
				}
				else { //반내림
					result[j] = 0;
					num /= 10;
				}
				j++;
			}
			result[j] = num;
			
			for (p = j; p >=0; p--) {
				printf("%lld", result[p]);
			}
		}

		else { //num이 10보다 작으면 num값만 프린트 해주면 됨 
			printf("%lld", num);
		}

		if (i != test) {
			printf("\n");
		}
	}

	return 0;
}

//result[int, long long int는 10^5까지 대괄호 안에 들어갈 수 있다고 생각하기]: 이거 넘기면 콘솔창에 아무것도 입력 안되고 꺼짐