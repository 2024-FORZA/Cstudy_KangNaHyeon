//2941
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[101];
	int i, cnt = 0;

	scanf("%s", str);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else if (str[i + 1] == '-') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else if (str[i + 1] == 'z' && str[i + 2] == '=') { //이거를 if로 써서 계속 오류났던 거였음...
				cnt++;
				printf("(%d %d)", i, cnt);
				i = i + 2;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				cnt++;
				printf("(%d %d)", i, cnt);
				i++;
			}
			else {
				cnt++;
			}
		}
		else {
			cnt++;
			printf("(%d %d)", i, cnt);
		}
	}

	printf("%d", cnt);

	return 0;
}

/*
다 맞은 거 같은데 백준에서 계속 오류났던 이유
: d-,dz= 를 if if 로 써둠.. 중복으로 계속 체크 됐던 거임... >> if else if 로 바꾸고 맞음 ㅎ...

>> '디버깅' 처음 써봄. cnt, i 변수값 변화도 단계별로 왼쪽 아래 박스에 보여줌~~ '어느 조건들 거쳐서' 이런 답이 나왔나 알기 쉬움 
(원래는 printf로 일일이 써서 출력값을 통해 확인했었는데, 나한텐 되게 도움된 오류 확인법이었음, 이젠 printf 말고 디버깅 써야겠다~~)
*/