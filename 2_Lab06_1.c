//1252
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char n1[81], n2[81];
	int cut1=-1, cut2=-1, max1, max2, cnt=0, j, i=0, carry[82];

	scanf("%s %s", n1, n2);

	max1 = strlen(n1)-1;
	max2 = strlen(n2)-1;

	//앞부분에 이어지는 '0' 고려 안하려는 의도 (0001 이면 이어지는 '0'의 최대 인덱스 2을 기록, 인덱스 2까지 연산하게)
	for (i = 0; i <= max1; i++) {
		if (n1[i] == '0') {
			cut1 = i;
		}
		else if (n1[i] != '0') {
			break;
		}
	}
	for (i = 0; i <= max2; i++) {
		if (n2[i] == '0') {
			cut2 = i;
		}
		else if (n2[i] != '0') {
			break;
		}
	}

	//덧셈 연산 시작
	i = 0; //i값 위에 꺼 재활용해서 0으로 초기화해줘야 함
	while (1) {
		//각 숫자의 자릿수 & 올림수에 '1'이 몇개 있는지 센다 (3,2,1,0개에 따라 올림수 내림수가 결정되기 때문)
		if (n1[max1]=='1' && max1 > cut1) {
			cnt++;
		}
		if (n2[max2] == '1' && max2 > cut2) {
			cnt++;
		}
		if (carry[i] == 1) {
			cnt++;
		}

		/*'n1, n2, 올림수 개수'에 따라 연산 결과 달라짐*/
		//0+0 = 0
		if (cnt == 0) {
			carry[i + 1] = 0;
			carry[i] = 0;
		}
		//0+1 = 1, 1+0 = 1
		else if (cnt == 1) {
			carry[i + 1] = 0;
			carry[i] = 1;
		}
		//1+1 = 10
		else if (cnt == 2) {
			carry[i + 1] = 1;
			carry[i] = 0;
		}
		//1+1+1 = 11
		else if (cnt == 3) {
			carry[i + 1] = 1;
			carry[i] = 1;
		}

		max1--;
		max2--;
		i++;
		cnt = 0;
		
		//'n1, n2 끝까지 연산'했고, '더이상 남은 올림수 없을 때' 종료
		if ((max1 <= cut1) && (max2 <= cut2) && (carry[i] != 1)) {
			break;
		}
	}

	//이진수 연산결과 거꾸로 출력
	for (j = i - 1; j >= 0; j--) {
		printf("%d", carry[j]);
	}

	return 0;
}



/*
(문제 구조상 무조건 char형으로 풀게 정해짐)
2진수가 80자리면, 자료형은 2^80-1을 담을 수 있어야 한다.
그러나 long long 최대 크기 2^63-1 이므로 담을 수 없다.
>> double로는 안되나? (-1.7*10^308 ~ 1.7*10^308)
안된다. double은 %를 못 쓰므로 자릿수 하나씩 분리하기 어렵다

->따라서 char형으로만 풀게끔 설계된 문제이다.
*/

/*
cut과 max와의 관계 논리 고려해서 50 % ->정답으로 끌어올림
>> cut = -1이 초기값이여야 이진수가 0으로 시작할 때, 1로 시작할 때 모두 고려 가능 (cnt++문, break문 조건에서~)
000 00
001 01
예시로 따져보면 어떻게 논리 고려해야 할지 보임~
*/