//1924
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, month, day, sum=0;
	char MONTH[][7] = { //2���� �迭���� �ش� �ε��� ã�� �� (if�� �Ⱦ�)
		"SUN",
		"MON",
		"TUE",
		"WED",
		"THU",
		"FRI",
		"SAT"
	};

	scanf("%d %d", &month, &day);
	while (i < month) {
		switch (i) {
			case 4:
			case 6:
			case 9:
			case 11:
				sum += 30;
				break;
			case 2:
				sum += 28;
				break;
			default:
				sum += 31;
				break;
		}
		i++;
	}
	sum += day;

	printf("%s", MONTH[sum % 7]);

	return 0;
}