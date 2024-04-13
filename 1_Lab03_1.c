//10817
#include <stdio.h>

int main()
{

	int A = 1;
	int B = 1;
	int C = 1;

	scanf_s("%d %d %d",&A, &B, &C);

	if (A < B)
	{
		if (B < C)
		{
			printf("%d", B);
		}
		if (B > C)
		{
			if (A < C)
			{
				printf("%d", C);
			}
			if (A > C)
			{
				printf("%d", A);
			}
		}
	}

	if (A > B)
	{
		if (B > C)
		{
			printf("%d", B);
		}
		if (B < C)
		{
			if (A < C)
			{
				printf("%d", A);
			}
			if (A > C)
			{
				printf("%d", C);
			}
		}
	}

	if (A == B)
	{
		if (A < C || A > C)
		{
			printf("%d", A);
		}
	}

	if (B == C)
	{
		if (B < A || B > A)
		{
			printf("%d", B);
		}
	}

	if (A == C)
	{
		if (A < B || A > B)
		{
			printf("%d", A);
		}
	}

	if (A == B && B == C)
	{
		printf("%d", A);
	}

	return 0;
}