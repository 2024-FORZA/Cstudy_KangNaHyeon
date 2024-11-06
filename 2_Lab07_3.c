//1978
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n) {
	int i;

	//1�� �� ó�� �����ָ� ���ʿ� for�� ������ return 0���� ����, cnt�� ���ԵǾ� ����
	if (n == 1) {
		return 1;
	}

	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 1;
	}
	return 0;
}

int main() {
	int n, i, num[100], cnt = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (!(is_prime(num[i]))) {
			cnt++;
		}
	}

	printf("%d", cnt);

	
	return 0;
}