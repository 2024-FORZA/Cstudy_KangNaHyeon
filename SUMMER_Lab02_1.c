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
//new_sum 이 자꾸 원하는 값 안나와서 보니까 int로 계산하고 있었음 (int로 계산하면 2.25인걸 2로 내림해버림)