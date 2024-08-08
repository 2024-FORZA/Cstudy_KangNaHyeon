//2720
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, i, change, Quarter, Dime, Nickel, Penny;

	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &change);
		Quarter = change / 25;
		change %= 25;
		Dime = change / 10;
		change %= 10;
		Nickel = change / 5;
		change %= 5;
		Penny = change;
		
		printf("%d %d %d %d", Quarter, Dime, Nickel, Penny);
		if (i != num) {
			printf("\n");
		}
	}

	return 0;
}
