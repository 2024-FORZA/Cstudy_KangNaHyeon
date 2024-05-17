//1037
#include <stdio.h>

int main() {
	int num, i, j, a[50], max = 0, min = 10000000;
	scanf_s("%d", &num);
	for (i = 0; i < num; ++i) {
		scanf_s("%d", &a[i]);
	}

	for (j = 0; j < num; ++j) {
		if (max < a[j]) {
			max = a[j];
		}
		if (min > a[j]) {
			min = a[j];
		}
	}
	if (num != 1) {
		printf("%d", max * min);
	}
	else {
		printf("%d", a[0] * a[0]);
	}
	return 0;
}