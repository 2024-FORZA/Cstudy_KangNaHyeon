//1032
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char s[50][50];
	int n, i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", s[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < strlen(s[i]); j++) {
			if ((s[0][j] != s[i][j]) && (s[0][j] != '?'))
				s[0][j] = '?'; //�� ������ '==' �����.. (�� ���ǿ� �ȵ��淡 if ���Ǹ� ���� �־���...)
			if (i == n - 1)
				printf("%c", s[0][j]);
		}
	}

	return 0;
}