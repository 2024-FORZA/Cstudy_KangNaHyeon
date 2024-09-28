//17608
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long N, i, stick[100001], cnt = 0, max_height = 0;

	scanf("%lld", &N);
	for (i = 0; i < N; i++) {
		scanf("%lld", &stick[i]);
	}

	// 오른쪽에서 왼쪽으로 보이는 막대기의 수를 계산
	for (i = N - 1; i >= 0; i--) {
		if (stick[i] > max_height) {
			cnt++;             // 현재 막대기가 보임
			max_height = stick[i]; // 최대 높이 업데이트
		}
	}

	printf("%lld\n", cnt);
	return 0;
}