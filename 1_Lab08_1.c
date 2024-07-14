//8958
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int limit, i, j, count = 0, sum = 0;
	char answer[81] = {'none'};

	scanf("%d", &limit);
	for (i = 0; i < limit; i++) {
		count = 0;
		sum = 0;
		scanf("%s", answer);
		for (j = 0; j < strlen(answer); j++) {
			if (j==0&&answer[j] == 'O') {
				count = 1;
				sum = 1;
			}
			else if (j != 0 && answer[j] == 'O' && answer[j - 1] == 'O') {
				count++;
				sum += count;
			}
			else if (j != 0 && answer[j] == 'O' && answer[j - 1] != 'O') {
				count = 1;
				sum += count;
			}
		}
		printf("%d", sum);
		if (i<limit-1) {
			printf("\n");
		}	
	}

	return 0;
}

//'문자'끼리 비교할 때는 ''(작은 따옴표), "문자열"끼리 비교할 때는 ""(큰 따옴표)로 ex) if(answer[0]=="O"){} (오류),  if(answer[0]=='O'){} (ㅇㅋ)
//한 세트 끝나고 count = 0, sum = 0 안써줘서 오류남