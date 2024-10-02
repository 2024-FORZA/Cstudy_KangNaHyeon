//1475
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000001];
	long long cnt[10] = {0}, i, max = 0, max_i=-1;

	scanf("%s", &str);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == '0') {
			cnt[0]++;
		}
		else if (str[i] == '1') {
			cnt[1]++;
		}
		else if (str[i] == '2') {
			cnt[2]++;
		}
		else if (str[i] == '3') {
			cnt[3]++;
		}
		else if (str[i] == '4') {
			cnt[4]++;
		}
		else if (str[i] == '5') {
			cnt[5]++;
		}
		else if (str[i] == '9' || str[i] == '6') {
			cnt[6]++;
		}
		else if (str[i] == '7') {
			cnt[7]++;
		}
		else if (str[i] == '8') {
			cnt[8]++;
		}
	}

	if (cnt[6] % 2 == 0) {
		cnt[6] /= 2;
	}
	else if (cnt[6] % 2 != 0) {
		cnt[6] = cnt[6] / 2 + 1;
	}

	for (i = 0; i < 9; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			max_i = i;
		}
	}

	printf("%lld", max);


	return 0;
}