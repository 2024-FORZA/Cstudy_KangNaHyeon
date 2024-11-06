//1158
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, k, i, cnt = 0, centinul = 0;
	int num[5001];

	scanf("%d %d", &n, &k);

	//1~n 원소로 가지는 배열 만듦
	for (i = 0; i < n; i++) {
		num[i]=i + 1;
	}

	i = 0;
	while (centinul != n) { //n개의 원소를 모두 출력한 후 보초값이 n일 때 종료
		//제거당하지 않은 사람들에 한해 연산 (이미 연산한 사람을 0으로 바꿔놨기에~)
		if (num[i] != 0) {
			cnt++;
			if (cnt == k) {
				//배열 출력 형식을 맞추기 위함
				if (centinul == 0) {
					printf("<");
				}
				printf("%d", num[i]);
				if (centinul < n - 1) {
					printf(", ");
				}
				else if (centinul == n-1) {
					printf(">");
				}

				num[i] = 0; //k번째 사람 제거
				cnt = 0; //몇번짼지 다시 세기 위해 cnt=0으로 초기화
				centinul++; //몇 명 제거당했는지 기록 (n명 모두 제거당하면 while 끝내게)
			}
		}
		i++;
		//인덱스가 순환할 수 있게 마지막을 넘어서면 0으로 돌려놈
		if (i == n)
			i -= n;
	}

	return 0;
}