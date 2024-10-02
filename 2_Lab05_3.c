//5354
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long test, i, j, p, num[100000];

	scanf("%lld", &test);
	for (i = 0; i < test; i++) {
		scanf("%lld", &num[i]);
	}

	//test 개수에 따른 경우
	for (i = 0; i < test; i++) {
		//1일 때는 #이 하나만 나와야해서 위에 #을 없애준 것
		if (num[i] > 1) {
			for (j = 0; j < num[i]; j++) {
				printf("#");
			}
			printf("\n");
		}
		//중간에 #,J,# 반복되는 부분 (세로 개수)
		for (j = 0; j < num[i] - 2; j++) {
			//(가로 개수)
			
			//처음 #1개
			printf("#");
			//J는 num[i]-2개 만큼 반복됨
			for (p = 0; p < num[i] - 2; p++) {
				printf("J");
			}
			//마지막 #1개
			printf("#\n");
		}
		//마지막 #은 num[i]만큼 반복
		for (j = 0; j < num[i]; j++) {
			printf("#");
		}
		//한칸 띄는 거는 맨 마지막 꺼 전까지
		if (i != test-1) {
			printf("\n\n");
		}
	}

	return 0;
}

// vs에선 맞았다는데 백준에서는 틀렸대 >> 극단적인 값 넣어보기 (num[i]==1 일 때, 내 논리대로라면 
// #
// #
// 일케 세로로 2개 나옴~ 따라서 이걸 # 하나만 나오게끔 조치 취해줘야 함 

// 반복되는 부분과 아닌 부분 구분해서 for문 써주는 거 필요