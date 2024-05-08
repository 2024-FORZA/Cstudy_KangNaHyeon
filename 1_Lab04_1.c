#10870
#include <stdio.h>
int main() {
	int n, limit, c, a = 0, b = 1;

	scanf("%d", &limit);

	for (n = 0; n + 1 <= limit; n++) {
		c = a + b;
		a = b;
		b = c;

	}
	if (limit == 0) {
		printf("%d", 0);
	}
	else if (limit == 1) {
		printf("%d", 1);
	}
	else if (limit >= 2) {
		printf("%d", a);
	}

	return 0;
}