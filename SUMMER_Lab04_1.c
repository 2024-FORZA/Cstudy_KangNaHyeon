//1152
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000000];
	long long int cnt = 0,i;

	scanf("%[^\n]", str); // \n만 뺀 모든 문자 받아들이기 (이러면 공백으로 scanf입력 종료되는거 막을 수 있음 (AA BB CC, %s: "AA", %[^\n]: "AA BB CC")
	
		if(str[0]==' '&& strlen(str)==1) {
			cnt = 0;
		}
		else {
			for (i = 1; i < strlen(str)-1; i++) {
				if (str[i - 1] != ' ' && str[i] == ' ' && str[i + 1] != ' ') { //A[i]는 1개 따라서 ''(작은따옴표) 써야 함 (""(큰따옴표)가 아니라~)
					cnt++;
				}
			}
			cnt++;
		}

	printf("%lld", cnt);

	return 0;
}

/*
scnaf 특징
1. space == enter == 배열 끝냄 (str에 A가 담긴 후 스페이스 치고 B를 쓰면 str는 B로 대체된다.)
>> 이 말은 scanf에 입력 시 스페이스를 띄운 값을 통으로 %s에 저장할 수 없다는 것 Ex) AA BB CC 는 str배열에 "AA BB CC"로 저장되는 것이 아니라 str에 "AA"->"BB"->"CC"로 계속 대체되며 저장되는 것
*/

/*
Q.break문 조건을 space(32), scanf 속 enter(10 == \n), 공백(20)의 아스키코드로 정하려는데 왜 적용이 안되지??
A.
if (A == "\0") { //의도: enter를 치면 break로 반복문에서 나와라
	break;
}
>> A는 str 자체임. 따라서 A="입력문자\0" 이지, "입력문자"와 "\0"이 개별로 들어가는 거 아님
*/

/*
break문 속 'break 조건'을 계속 오류냄
sol) 다른 배열 B를 an-1느낌의 배열로 A값 복사해두기, 복사본 바탕으로 배열B가 배열A랑 같으면 마지막 단어에 도달한 것이므로, 이때 break 치게 논리 짜는 것
*/