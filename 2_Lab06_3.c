//1297
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
	int D, H, W;
	double R;

	scanf("%d %d %d", &D, &H, &W);
	R = D / sqrt(H * H + W * W);
	printf("%d %d", (int)(H * R), (int)(W * R));

	
	return 0;
}