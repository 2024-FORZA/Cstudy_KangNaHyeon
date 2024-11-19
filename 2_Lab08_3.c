//10813
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int s1, int s2, int basket[]) {
	int temp;
	
	temp = basket[s1];
	basket[s1] = basket[s2];
	basket[s2] = temp;
}

int main() {
	int m, n, i, s1, s2, basket[101];

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		basket[i] = i;
	}
	
	for (i = 0; i < m; i++) {
		scanf("%d %d", &s1, &s2);
		swap(s1, s2, basket);
	}

	for (i = 1; i <= n; i++) {
		printf("%d ", basket[i]);
	}
	
	return 0;
}