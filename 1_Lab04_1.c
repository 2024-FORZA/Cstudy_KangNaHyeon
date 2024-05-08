#include <stdio.h>
int main() {
	int n, limit, a ;

	scanf_s("%d", &limit);


	for (n = 2; n + 1 <= limit; n = n + 2) {
		a=n* (n - 1);
		a = a * (n - 1);
	}

	printf("%d", n);

	return 0;
}