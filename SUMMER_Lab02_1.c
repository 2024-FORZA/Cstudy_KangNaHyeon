//1546
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, score;
	float new_sum = 0, i, sum = 0, max = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &score);
		sum += score;
		if (score >= max) {
			max = score;
		}
	}
	new_sum = sum/max*100/N;
	printf("%f", new_sum);

	return 0;
}
//new_sum �� �ڲ� ���ϴ� �� �ȳ��ͼ� ���ϱ� int�� ����ϰ� �־��� (int�� ����ϸ� 2.25�ΰ� 2�� �����ع���)