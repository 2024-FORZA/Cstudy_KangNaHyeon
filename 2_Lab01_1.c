//1439
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[1000001];
	long long int i, cnt0 = 0, cnt1 =0;

	scanf("%s", str);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] != str[i + 1]) {
			if (str[i] == '0') {
				cnt0++;
				if (i == strlen(str) - 2) {
					cnt1++;
				}
			}
			else if (str[i] == '1') {
				cnt1++;
				if (i == strlen(str) - 2) {
					cnt0++;
				}
			}
		}
	}
	

	if(cnt0 > cnt1){
		printf("%lld", cnt1);
	}
	else{
		printf("%lld", cnt0);
	}

	return 0;
}

/*
백준 오류 났던 이유 : 마지막 cnt0, cnt1 비교할 때 cnt0 > cnt1에 if 두고, cnt0 < cnt1 로 else if 두는 바람에 cnt0 == cnt1일 때 조건이 빠졌었음...
*/
