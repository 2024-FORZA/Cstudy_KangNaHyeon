//4673
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	long long int i, num, sum = 0;
	long long int exclude[10001] = {0};

	for (i = 1; exclude[i] <= 10000; i++) {
		num = i;
		sum = 0;
		sum += num;
		while(1){
			sum += (num % 10);
			num /= 10;
			if (num < 10) {
				if(i>=10){
					sum += num;
				}
				break;
			}
		}
		if(sum<=10000){
			exclude[sum] = sum;
		}
	}

	for (i = 1; i <= 10000; i++) {
		if(exclude[i] == 0){
			printf("%lld", i);
			if (i != 9993) {
				printf("\n");
			}
		}
	}
	
	return 0;
}


/*
Run-Time Check Failure #2 - Stack around the variable ���� �� ����
: �� ������ ������ �迭�� �׺��� �� ���� ���� �������� �� �� �����. �̹� ���� 
exclude[sum] = sum;�� �迭�� ���� �������ٰ� �߻��ߴ�. sum�� 10000������ ���� �ƴ� i�� ���� ������ ���̹Ƿ� 10000���� �� ū ���� ���� �� �־���.
�̸� �����ϰ� �ٸ� ���� ���� ���Ÿ� �޶� ����״��� �������� �Ŵ�.

�ذ��ϱ� ���ؼ��� sum���� 10000���� ������ �ɾ������ν� �ذ��� �� �ִ�. (exclude�迭�� �ε����� �� 10001���̱⿡~) 
if(sum<=10000){
	exclude[sum] = sum;
}
*/