//1672
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Ī �̿� (�ص� ǥ�� Ư¡), main�� ������ �ʹ� ����� �� ���Ƽ� �Լ��� �M
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

	//if�� �ٿ��� 
}

int main() {
	int n, i;
	char encrypt[1000001];

	scanf("%d", &n);
	scanf("%s", encrypt);

	//���� �迭�� ������ �ʰ�, ���� �迭 ����
	for (i = n - 1; i > 0; i--) {
		encrypt[i - 1] = decrypt(encrypt[i - 1], encrypt[i]);
	}

	//���� �ص� ���ڸ� ù �ε����� �����
	printf("%c", encrypt[0]);

	return 0;
}