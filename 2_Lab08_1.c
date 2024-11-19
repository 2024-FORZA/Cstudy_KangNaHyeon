//1672
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//대칭 이용 (해독 표의 특징), main에 넣으면 너무 길어질 것 같아서 함수로 뻄
char decrypt(char c_1, char c) {
	if (c_1 == 'A' && c == 'A')
		return 'A';
	if (c_1 == 'G' && c == 'G')
		return 'G';
	if (c_1 == 'C' && c == 'C')
		return 'C';
	if (c_1 == 'T' && c == 'T')
		return 'T';

	if ((c_1 == 'A' && c == 'G') || (c_1 == 'G' && c == 'A'))
		return 'C';
	if ((c_1 == 'A' && c == 'C') || (c_1 == 'C' && c == 'A'))
		return 'A';
	if ((c_1 == 'A' && c == 'T') || (c_1 == 'T' && c == 'A'))
		return 'G';

	if ((c_1 == 'G' && c == 'C') || (c_1 == 'C' && c == 'G'))
		return 'T';
	if ((c_1 == 'G' && c == 'T') || (c_1 == 'T' && c == 'G'))
		return 'A';

	if ((c_1 == 'C' && c == 'T') || (c_1 == 'T' && c == 'C'))
		return 'G';

	//if문 줄여라 
}

int main() {
	int n, i;
	char encrypt[1000001];

	scanf("%d", &n);
	scanf("%s", encrypt);

	//따로 배열을 만들지 않고, 기존 배열 변형
	for (i = n - 1; i > 0; i--) {
		encrypt[i - 1] = decrypt(encrypt[i - 1], encrypt[i]);
	}

	//최종 해독 문자를 첫 인덱스로 끌고옴
	printf("%c", encrypt[0]);

	return 0;
}