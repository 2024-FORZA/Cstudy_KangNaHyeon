//11653
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int num, n, i=0, j, n_arr[100000], original;

	scanf("%lld", &num);
	for (n = 2; n <= num; n++) { 
		while (1) {
			if (num % n == 0) {
				num /= n;
				n_arr[i] = n;
				i++;
			}
			else {
				break;
			}
		}
	}

	for (j = 0; j < i; j++) {
		printf("%lld", n_arr[j]);
		if (j != i - 1) {
			printf("\n");
		}
	}

	return 0;
}

/*
num���� num/=n���� ��� �۾���
������) n < num �����ϸ� �������� ���� �μ��� �ݿ� ���ϰ� ��
�ذ�) n<=num���� ������� ��. ex) 12�� 2 2���� ������ num=3�̰�, n�� �� 3�� �ݿ��ؾ��ϴµ�, n<num�̸� 3�� �ݿ� ���ϰ� �����Ƿ� n<=num�̶�� ����� ��
*/