//2439
#include <stdio.h>

int main() 
{

	int n =0;

	scanf_s("%d", &n);

	for (int p = 1; p <= n; p++) 
	{
		for (int k = 1; k <= (n - p); k++) 
		{
			printf(" ");
		}

		for (int k = 1; k <= p; k++) 
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}