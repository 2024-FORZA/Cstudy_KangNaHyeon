//5347
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	long long int test, i, num1, num2, j, answer=1;

	scanf("%lld", &test);
	for (i = 0; i < test; i++) {
		scanf("%lld %lld", &num1, &num2);

		//�ּҰ������ �� ������ �μ��� �� �ִ� �μ��� �������� �ȴ�.
		j = 2;
		answer = 1;
		while (j<=num1 || j<=num2) { //������������ num1, num2 �μ� ã�� ��
			while(num1 % j == 0 || num2 % j == 0){
				answer *= j; //�μ��� ã�´�� ���Ѵ�.
				if(num1 % j == 0){ //ã�� �μ��� ��꿡�� ���ܽ�Ų��.
					num1 /= j;
				}
				if (num2 % j == 0) { //ã�� �μ��� ��꿡�� ���ܽ�Ų��.
					num2 /= j;
				}
			}
			j++;
		}
		printf("%lld", answer);
		if (i != test) {
			printf("\n");
		}
	}

	return 0;
}