//8958
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int limit, i, j, count = 0, sum = 0;
	char answer[81] = {'none'};

	scanf("%d", &limit);
	for (i = 0; i < limit; i++) {
		count = 0;
		sum = 0;
		scanf("%s", answer);
		for (j = 0; j < strlen(answer); j++) {
			if (j==0&&answer[j] == 'O') {
				count = 1;
				sum = 1;
			}
			else if (j != 0 && answer[j] == 'O' && answer[j - 1] == 'O') {
				count++;
				sum += count;
			}
			else if (j != 0 && answer[j] == 'O' && answer[j - 1] != 'O') {
				count = 1;
				sum += count;
			}
		}
		printf("%d", sum);
		if (i<limit-1) {
			printf("\n");
		}	
	}

	return 0;
}

//'����'���� ���� ���� ''(���� ����ǥ), "���ڿ�"���� ���� ���� ""(ū ����ǥ)�� ex) if(answer[0]=="O"){} (����),  if(answer[0]=='O'){} (����)
//�� ��Ʈ ������ count = 0, sum = 0 �Ƚ��༭ ������