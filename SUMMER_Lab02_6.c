//2309
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int height[10],i,j,sum=0,p,q,min=101,k=0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
		sum += height[i];
	}
	sum -= 100;

	//������ ������(i) �����ϴ� ����
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (sum == height[i] + height[j]) { // sum == height[i] + height[j]���� ==�� =�� �Ἥ �� ����������
				p = i;
				q = j;
				break;
			}
		}
	}

	//������������ �迭 ��� �Լ�
	for (j = 0; j < 7; j++) {
		min = 101;  // '�ݺ���'������ �ٽ� ���� ���ư��� �� '�ʱ�ȭ'���� �߿� ex) min=101�� �ʱ�ȭ �Ƚ��Ѽ� ������
		for (i = 0; i < 9; i++) {
			if (i != p && i != q) {
				if (min > height[i]) {
					min = height[i];
					k = i;
				}
			}
		}
		printf("%d", min, k);
		height[k] = 101;
		if (j < 6) {
			printf("\n");
		}
	}


	return 0;
}

// sum == height[i] + height[j]���� ==�� =�� �Ἥ �� ����������
// '�ݺ���'������ �ٽ� ���� ���ư��� �� '�ʱ�ȭ'���� �߿� ex) min=101�� �ʱ�ȭ �Ƚ��Ѽ� ������
