//1284
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char num[10000];
	int i, len=2;

	while(1){
		len = 2;
		scanf("%s", num);
		if (num[0] == '0') {
			break;
		}
	
		for (i = 0; i < strlen(num); i++) {
			if (num[i] == '0') {
				len += 4;
			}
			else if (num[i] == '1') {
				len += 2;
			}
			else {
				len += 3;
			}
		}
		len += strlen(num) - 1;

		printf("%d", len);
		if (i != strlen(num) - 1) {
			printf("\n");
		}
	}
	return 0;
}

/*
(subscript requires array or pointer type 에러)
정의 시 ‘배열’로 정의했는지 확인 
ex) ‘char num;’ 일케 적어서 이 에러 뜸 (char num[숫자] 일케 똑바로 정의해주면 됨~ 먼저, 포인터로 바꾸라는게 아니라 ‘배열’인지 확인!)
*/