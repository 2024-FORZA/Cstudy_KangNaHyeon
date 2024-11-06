#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int time[101] = { 0 };
	int c1, c2, c3, t1, t2, i, j, min=101, max=0, sum=0;

	scanf("%d %d %d", &c1, &c2, &c3);
	for (i = 0; i < 3; i++) {
		scanf("%d %d", &t1, &t2);
		for (j = t1; j <= t2-1; j++) {
			time[j]++;
		}
		if (t1 < min)
			min = t1;
		if (t2 > max)
			max = t2;
	}

	for (i = min; i <= max; i++) {
		if (time[i] == 1)
			sum += c1;
		else if (time[i] == 2)
			sum += 2*c2;
		else if (time[i] == 3)
			sum += 3*(c3);
	}

	printf("%d", sum);

	return 0;
}