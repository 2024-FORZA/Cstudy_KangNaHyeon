//1157
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001];
	long long int i, j = 64,Len, k, p, max = 0, cnt = 0, num[26] = { 0 };

	scanf("%s", str);
	Len = strlen(str); //헐... strlen 중복 호출 제거하는 것만으로도 시간 줄일 수 있네?? (원래는 strlen을
	for (i = 0; i < Len; i++) { //여기에 썼었음...)
		//소문자->대문자로 바꾼다.
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32; //같은 영문자의 대소문자 아스키코드 차: 32
		}
		for (p = 0; p < 26; p++) {
			if (str[i] == 'A' + p) {
				num[p]++; //알파뱃 숫자에 맞춰서 개수 배열에 넣음
			}
			if (num[p] > max) {
				max = num[p]; //각 알파뱃 개수들 중 최댓값 구함
			}
		}
	}

	//반복 횟수가 최대에 해당하는 알파벳이 몇개인지 구함 
	for (i = 0; i < 26; i++) {
		if (num[i] == max) {
			cnt++;
			k = i;
		}
		//1개 이상인지만 알면 되므로, cnt=3 이상으론 셀 필요가 없음 
		if (cnt > 1) {
			break;
		}
	}

	if (cnt == 1) {
		printf("%c", k+'A');
	}
	else {
		printf("?");
	}

	return 0;
}

/*
1. 두개의 for문을 합침
각 알파벳 별로 반복된 횟수 중 최댓값 구하는 것
for (i = 0; i < 26; i++) {
	if (num[i] > max) {
		max = num[i];
	}
}

>> 최댓값 구하는 걸 따로 뺐었는데, 실제로는 처음 for문 안에 넣어서 무슨 영문자인지는 상관없이 max값만 구할 수 있었음~

2. strlen 중복 호출 제거 (은근 시간단축 됨 오...)
strlen을 for문 불러올 때마다 연산시키는게 아닌 Len=strlen(str)를 통해 '미리 계산한 값'을 사용한다.
*/