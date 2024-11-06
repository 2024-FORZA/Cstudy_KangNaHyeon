//5585
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int price, change, cnt = 0;

	scanf("%d", &price);
	change = 1000 - price;

	while (change != 0) {
		if (change >= 500) {
			change -= 500;
			cnt++;
		}
		else if (change>=100) {
			change -= 100;
			cnt++;
		}
		else if (change >= 50) {
			change -= 50;
			cnt++;
		}
		else if (change >= 10) {
			change -= 10;
			cnt++;
		}
		else if (change >= 5) {
			change -= 5;
			cnt++;
		}
		else {
			change -= 1;
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}