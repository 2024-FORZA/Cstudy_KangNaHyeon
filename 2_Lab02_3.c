//1157
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001];
	long long int i, j = 64,Len, k, p, max = 0, cnt = 0, num[26] = { 0 };

	scanf("%s", str);
	Len = strlen(str); //��... strlen �ߺ� ȣ�� �����ϴ� �͸����ε� �ð� ���� �� �ֳ�?? (������ strlen��
	for (i = 0; i < Len; i++) { //���⿡ �����...)
		//�ҹ���->�빮�ڷ� �ٲ۴�.
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32; //���� �������� ��ҹ��� �ƽ�Ű�ڵ� ��: 32
		}
		for (p = 0; p < 26; p++) {
			if (str[i] == 'A' + p) {
				num[p]++; //���Ĺ� ���ڿ� ���缭 ���� �迭�� ����
			}
			if (num[p] > max) {
				max = num[p]; //�� ���Ĺ� ������ �� �ִ� ����
			}
		}
	}

	//�ݺ� Ƚ���� �ִ뿡 �ش��ϴ� ���ĺ��� ����� ���� 
	for (i = 0; i < 26; i++) {
		if (num[i] == max) {
			cnt++;
			k = i;
		}
		//1�� �̻������� �˸� �ǹǷ�, cnt=3 �̻����� �� �ʿ䰡 ���� 
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
1. �ΰ��� for���� ��ħ
�� ���ĺ� ���� �ݺ��� Ƚ�� �� �ִ� ���ϴ� ��
for (i = 0; i < 26; i++) {
	if (num[i] > max) {
		max = num[i];
	}
}

>> �ִ� ���ϴ� �� ���� �����µ�, �����δ� ó�� for�� �ȿ� �־ ���� ������������ ������� max���� ���� �� �־���~

2. strlen �ߺ� ȣ�� ���� (���� �ð����� �� ��...)
strlen�� for�� �ҷ��� ������ �����Ű�°� �ƴ� Len=strlen(str)�� ���� '�̸� ����� ��'�� ����Ѵ�.
*/