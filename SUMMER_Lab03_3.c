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
(subscript requires array or pointer type ����)
���� �� ���迭���� �����ߴ��� Ȯ�� 
ex) ��char num;�� ���� ��� �� ���� �� (char num[����] ���� �ȹٷ� �������ָ� ��~ ����, �����ͷ� �ٲٶ�°� �ƴ϶� ���迭������ Ȯ��!)
*/