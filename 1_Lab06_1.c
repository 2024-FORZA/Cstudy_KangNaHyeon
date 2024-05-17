//1547
#include <stdio.h>

int main() {
	int A=1, i, num, sw1, sw2;
	scanf_s("%d", &num);

	for (i = 1; i <= num; ++i) {
		scanf_s("%d %d", &sw1, &sw2);
		if (A == sw1) {
			A = sw2;
		}
		else if (A == sw2) {
			A = sw1;
		}
	}
	printf("%d", A);
	return 0;
}