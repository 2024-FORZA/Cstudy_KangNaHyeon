//2941
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[101];
	int i, cnt = 0;

	scanf("%s", str);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else if (str[i + 1] == '-') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else if (str[i + 1] == 'z' && str[i + 2] == '=') { //�̰Ÿ� if�� �Ἥ ��� �������� �ſ���...
				cnt++;
				printf("(%d %d)", i, cnt);
				i = i + 2;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else {
			cnt++;
			printf("(%d %d)", i, cnt);
		}
	}

	printf("%d", cnt);

	return 0;
}

/*
�� ���� �� ������ ���ؿ��� ��� �������� ����
: d-,dz= �� if if �� ���.. �ߺ����� ��� üũ �ƴ� ����... >> if else if �� �ٲٰ� ���� ��...

>> '�����' ó�� �ẽ. cnt, i ������ ��ȭ�� �ܰ躰�� ���� �Ʒ� �ڽ��� ������~~ '��� ���ǵ� ���ļ�' �̷� ���� ���Գ� �˱� ���� 
(������ printf�� ������ �Ἥ ��°��� ���� Ȯ���߾��µ�, ������ �ǰ� ����� ���� Ȯ�ι��̾���, ���� printf ���� ����� ��߰ڴ�~~)
*/