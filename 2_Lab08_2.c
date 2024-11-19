//1769
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

long long cnt = 0; //�Լ� �� cnt�� main������ �����ǰ� 

//�� �ڸ��� ���ϴ� �Լ� (10^6�ڸ���, ó�� ���ڸ� �����ϸ� �� �ڸ��� �� �ִ�: 9*10^7 < long long Ÿ�� �ִ�: 10^19 �̹Ƿ� ó�� �������ʹ� ���ڷ� ����ص� ����)
long long digit_sum(long long n) {
	long long sum = 0;

	//n���� 10���� ���� �������� 0�� �� ������ �� �ڸ��� �и��ؼ� sum�� ����
	while(n!=0){
		sum += (n % 10);
		n /= 10;
	}
	cnt++;

	return sum;
}

int main() {
	char num[1000001];
	long long sum = 0, len, i;

	scanf("%s", num);

	len = strlen(num);
	//ó�� ���ڸ� ���ڷ� �޾Ƽ� ascii �ڵ尪�� �̿��� ������ �ٲ� (long long Ÿ�� ũ�⸦ �Ѵ� �� ���̱� ����)
	for (i = 0; i < len; i++) {
		sum += (num[i] - '0');
	}
	//1�ڸ� ���� ���� ������ cnt ����X
	if (len > 1) {
		cnt++;
	}

	while (1) {
		//1�ڸ� ���� ���� ������ cnt ����X
		if(len>1){
			//�� �ڸ��� ���ϴ� ������ �ݺ��ǹǷ� �Լ��� ó�� (2��° �������ʹ� ������ �ص� long long ũ�� �ȳ���~)
			sum = digit_sum(sum);
		}
		
		//1�� �ڸ��鼭 3�� ����� ��
		if ((sum < 10) && (sum % 3 == 0)) {
			printf("%lld\nYES", cnt);
			break;
		}
		//1�� �ڸ��鼭 3�� ����� �ƴ� ��
		else if ((sum < 10) && (sum % 3 != 0)) {
			printf("%lld\nNO", cnt);
			break;
		}
	}

	return 0;
}

/*
��ũ�� ���� ���� ã�� ���

num ���� ��ũ�� ���� num�� ������Ű�� digit_sum �Լ����� ������ ���� ��
���� ���� ����� ���� digit_sum�� ������Ŵ. >> ��~ �Լ� ��ȯ���� int�� ���~ (int -> long long���� �ٲٸ鼭 ���Ծ��� ��~)
*/