//5354
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long test, i, j, p, num[100000];

	scanf("%lld", &test);
	for (i = 0; i < test; i++) {
		scanf("%lld", &num[i]);
	}

	//test ������ ���� ���
	for (i = 0; i < test; i++) {
		//1�� ���� #�� �ϳ��� ���;��ؼ� ���� #�� ������ ��
		if (num[i] > 1) {
			for (j = 0; j < num[i]; j++) {
				printf("#");
			}
			printf("\n");
		}
		//�߰��� #,J,# �ݺ��Ǵ� �κ� (���� ����)
		for (j = 0; j < num[i] - 2; j++) {
			//(���� ����)
			
			//ó�� #1��
			printf("#");
			//J�� num[i]-2�� ��ŭ �ݺ���
			for (p = 0; p < num[i] - 2; p++) {
				printf("J");
			}
			//������ #1��
			printf("#\n");
		}
		//������ #�� num[i]��ŭ �ݺ�
		for (j = 0; j < num[i]; j++) {
			printf("#");
		}
		//��ĭ ��� �Ŵ� �� ������ �� ������
		if (i != test-1) {
			printf("\n\n");
		}
	}

	return 0;
}

// vs���� �¾Ҵٴµ� ���ؿ����� Ʋ�ȴ� >> �ش����� �� �־�� (num[i]==1 �� ��, �� ����ζ�� 
// #
// #
// ���� ���η� 2�� ����~ ���� �̰� # �ϳ��� �����Բ� ��ġ ������� �� 

// �ݺ��Ǵ� �κа� �ƴ� �κ� �����ؼ� for�� ���ִ� �� �ʿ�