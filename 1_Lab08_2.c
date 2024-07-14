//11720
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int limit,i,sum=0;
	char numbers[101] = { 0 };

	scanf("%d", &limit);
	scanf("%s", numbers);
	for (i = 0; i < limit; i++) {
		sum += (int)(numbers[i]-'0');
	}
	printf("%d", sum);

	return 0;
}
