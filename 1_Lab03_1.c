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

// {}잘못 묶인 거 있어서 int main(){} 함수가 안묶인 거였음 (괄호 많아질 때 개수&위치 맞췄는지 주의)
// B<C 의 else는 B<=C이다....(헐... '=='일때 생각못함.. B<C인줄 ㅠㅠ, 어쩐지 출력값이 '2020'처럼 중복으로 나오더라...)