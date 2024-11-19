//10820
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sort(char s[]) {
	int i, lower = 0, upper = 0, digit = 0, space=0;

	for (i = 0; i<strlen(s); i++) {
		if (islower(s[i]))
			lower++;
		else if (isupper(s[i]))
			upper++;
		else if (isdigit(s[i]))
			digit++;
		else if (isspace(s[i]))
			space++;
	}
	printf("%d %d %d %d\n", lower, upper, digit, space);
}

int main() {
	char s[101];
	int i = 1;

	while(1){
		//���� ���� �ƹ��͵� ���� �ʰ� �������� ��
		if (gets_s(s, sizeof(s)) == NULL)
			break;
		sort(s);
	}

	return 0;
}

/*
���� �������� ��� �������� �Ⱦ˷���.. �쾾
(�Լ��� ��Ƽ�� ����)
getchar
-> enter�� ���� ���� (��ȯ��, ��Ƽ��: '\n')
-> ctrl + z ���� ���� (��ȯ��, ��Ƽ��: -1(=EOF))

_getch, _getche
-> enter�� ���� ���� (��ȯ��, ��Ƽ��: '\r')
-> ctrl + z ���� �Ұ� (��Ƽ�� ����)

gets_s, gets
-> enter�� ���� �Ұ� (��Ƽ�� ����)
-> ctrl + z ���� ���� (��ȯ��, ��Ƽ��: NULL)

(�ǹ�)
strlen(s)==0: ��� �ʰ�.. (?? �� ??)



���ؿ��� gets_s �����Ͽ�����
C99������ gets_s ������..
C11 ���ĺ��� ��� ����
>> gets�� fgets ���� ��
*/