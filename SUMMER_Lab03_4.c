//1598
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long int num1, num2, n, x1, x2, y1, y2,xlen,ylen;

	scanf("%ld %ld", &num1, &num2);
	for (n = 1;; n++) {  //for(�ʱⰪ;break��;���ǹ�) >> ���� ���µ� break�� ���ּ� ���� ���� for�� ����� ��
		if (4 * n - 3 == num1) {
			x1 = n;
			y1 = 4;
			break;
		}
		if (4 * n - 2 == num1) {
			x1 = n;
			y1 = 3;
			break;
		}
		if (4 * n - 1 == num1) {
			x1 = n;
			y1 = 2;
			break;
		}
		if (4 * n == num1) {
			x1 = n;
			y1 = 1;
			break;
		}
	}

	for (n = 1;; n++) {
		if (4*n - 3 == num2) {
			x2 = n;
			y2 = 4;
			break;
		}
		if (4*n - 2 == num2) {
			x2 = n;
			y2 = 3;
			break;
		}
		if (4*n - 1 == num2) {
			x2 = n;
			y2 = 2;
			break;
		}
		if (4*n == num2) {
			x2 = n;
			y2 = 1;
			break;
		}
	}

	xlen = x1 - x2;
	ylen = y1 - y2;

	//���� �����ִ� ��
	if (x1 - x2 < 0) {
		xlen = -(x1 - x2);
	}
	if (y1 - y2 < 0) {
		ylen = -(y1 - y2);
	}

	printf("%ld", xlen + ylen);

	return 0;
}

/*
(�⺻ ���̵��)
��ǥ������� ���ڴ�. (n�� x��, y�� 1,2,3,4 �� �ϳ���)
ǥ���� ���δ� ������ 4�� ���������̴�. ���� ��ȭ������ ��� ���ΰ��� ǥ���� �� �ִ� ex) 4n-3, 4n-2, 4n-1, 4n
ǥ���� ���δ� 1,2,3,4 �� �����Ǿ� �ִ�. ���� ���� ��ȭ�Ŀ� ���� y���� 1,2,3,4�� �������ָ� �ȴ�.

�̷��� 10000000���� ��Ÿ�� �Ŵϱ� for ���ѷ��� '(~;;~)��' ���� n�� ã�´�� for�� breakġ�� �� �� ������
*/