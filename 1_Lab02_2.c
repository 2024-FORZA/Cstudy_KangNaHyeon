#include <stdio.h>

int main()
{
	int A = 1;
	int B = 1;
	int C = 1;

	scanf_s("%d %d %d", &A, &B, &C);
	int a = (A + B) % C;
	int b = ((A % C) + (B % C)) % C;
	int c = (A * B) % C;
	int d = ((A % C) * (B % C)) % C;

	printf("%d \n%d \n%d \n%d", a, b, c, d);
	return 0;

}