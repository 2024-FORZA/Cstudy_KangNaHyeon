//2309
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int height[10],i,j,sum=0,p,q,min=101,k=0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
		sum += height[i];
	}
	sum -= 100;

	//제외할 난쟁이(i) 선택하는 과정
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (sum == height[i] + height[j]) { // sum == height[i] + height[j]에서 ==를 =로 써서 값 오류났었음
				p = i;
				q = j;
				break;
			}
		}
	}

	//오름차순으로 배열 출력 함수
	for (j = 0; j < 7; j++) {
		min = 101;  // '반복문'에서는 다시 원점 돌아갔을 때 '초기화'여부 중요 ex) min=101로 초기화 안시켜서 오류남
		for (i = 0; i < 9; i++) {
			if (i != p && i != q) {
				if (min > height[i]) {
					min = height[i];
					k = i;
				}
			}
		}
		printf("%d", min, k);
		height[k] = 101;
		if (j < 6) {
			printf("\n");
		}
	}


	return 0;
}

// sum == height[i] + height[j]에서 ==를 =로 써서 값 오류났었음
// '반복문'에서는 다시 원점 돌아갔을 때 '초기화'여부 중요 ex) min=101로 초기화 안시켜서 오류남
