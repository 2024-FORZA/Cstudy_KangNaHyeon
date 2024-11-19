//10820
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sort(char s[]) {
	int i, lower = 0, upper = 0, digit = 0, space=0;

	for (i = 0; i<strlen(s); i++) {
		if (islower(s[i]))
			lower++;
		else if (isupper(s[i]))
			upper++;
		else if (isdigit(s[i]))
			digit++;
		else if (isspace(s[i]))
			space++;
	}
	printf("%d %d %d %d\n", lower, upper, digit, space);
}

int main() {
	char s[101];
	int i = 1;

	while(1){
		//종료 조건 아무것도 넣지 않고 종료했을 때
		if (gets_s(s, sizeof(s)) == NULL)
			break;
		sort(s);
	}

	return 0;
}

/*
백준 문제에서 어떻게 종료할지 안알려줌.. 우씨
(함수별 센티널 정리)
getchar
-> enter로 종료 가능 (반환값, 센티널: '\n')
-> ctrl + z 종료 가능 (반환값, 센티널: -1(=EOF))

_getch, _getche
-> enter로 종료 가능 (반환값, 센티널: '\r')
-> ctrl + z 종료 불가 (센티널 없음)

gets_s, gets
-> enter로 종료 불가 (센티널 없음)
-> ctrl + z 종료 가능 (반환값, 센티널: NULL)

(의문)
strlen(s)==0: 출력 초과.. (?? 왜 ??)



백준에서 gets_s 컴파일오류남
C99에서는 gets_s 없었음..
C11 이후부터 사용 가능
>> gets나 fgets 쓰면 됨
*/