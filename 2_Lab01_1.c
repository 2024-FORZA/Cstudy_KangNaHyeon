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
���� ���� ���� ���� : ������ cnt0, cnt1 ���� �� cnt0 > cnt1�� if �ΰ�, cnt0 < cnt1 �� else if �δ� �ٶ��� cnt0 == cnt1�� �� ������ ��������...
*/
