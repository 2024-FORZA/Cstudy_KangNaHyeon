//17608
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long N, i, stick[100001], cnt = 0, max_height = 0;

	scanf("%lld", &N);
	for (i = 0; i < N; i++) {
		scanf("%lld", &stick[i]);
	}

	// �����ʿ��� �������� ���̴� ������� ���� ���
	for (i = N - 1; i >= 0; i--) {
		if (stick[i] > max_height) {
			cnt++;             // ���� ����Ⱑ ����
			max_height = stick[i]; // �ִ� ���� ������Ʈ
		}
	}

	printf("%lld\n", cnt);
	return 0;
}