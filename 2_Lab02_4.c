//2581
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long num1, num2, num, i, sum=0, cnt = 0, min = 10001;

	scanf("%lld %lld", &num1, &num2);
	for (num = num1; num <= num2; num++) {
		cnt = 0; //�ݺ������� ����Ǵ� ���� �ʱ�ȭ �߿�
		for (i = 2; i <= num / 2; i++) { //����� Ư���� ������ �ƴ� ���� ū ����� num�� 2�� ���� ������ �۰ų� ���� (2�� ���� ���� ����� �� �ִµ�, �׿� ¦�� ���� ���� ���� ū ������ �ƴ� ����� ���̱� ����, 1.5�� ����� �� ���ݾ�~~) ex) 1 2 3 6, 1 3 7 21 (3,7 ��� �̷��� Ư¡ ����)
			if (num % i == 0) {
				cnt++; //num�� ����ϴ� ���� ������ ��ü�� ���ƾ� �ϴϱ� cnt++�� '���� ����� ��'
			}
		}
		if (cnt == 0 && num!=1) { //cnt++�� ��е� ���� ������ �Ҽ��� ����, �ƿ� 1�� �� ���̽� sum, min ������ �������� ���ִ� �ŷ� ��
			sum += num;
			if (min > num) {
				min = num;
			}
		}
	}
	
	if (min == 10001) {
		printf("-1");
	}
	else{
		printf("%lld\n%lld", sum, min);
	}

	return 0;
}

/*
��... 1�� �Ҽ��� �ƴϾ���... (������ ���� ������ ���� ������...)

>>�ű⿡ 1�� �� ó�� ������ num+1�� �ؼ� 1 1 �Է��ϸ� 2 2 �� ��� ������ ������..
>>�ƿ� 1�� �� ���̽� sum, min ������ �������� ���ִ� �ŷ� ��
*/