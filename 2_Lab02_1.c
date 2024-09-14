//2588
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int num1, num2, sum = 0;
	
	scanf("%d %d", &num1,&num2);
	
	printf("%d\n", num1 * (num2 % 10));
	sum += num1 * (num2 % 10);
	num2 /= 10;
	printf("%d\n", num1 * (num2 % 10));
	sum += num1 * (num2 % 10)*10;
	num2 /= 10;
	printf("%d\n", num1 * (num2 % 10));
	sum += num1 * (num2 % 10)*100;
	printf("%d", sum);

	return 0;
}