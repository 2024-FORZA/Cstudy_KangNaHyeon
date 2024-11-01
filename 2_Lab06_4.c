//1453
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, i, j, cnt=0, seat[101];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &seat[i]);
		for (j = 0; j < i; j++) {
			if (seat[i] == seat[j]) {
				cnt++;
				break;
			}
		}
	}
	printf("%d", cnt);

	return 0;
}