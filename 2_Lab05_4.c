//1009
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long test, i, n1, n2, j, multi = 1;

	scanf("%lld", &test);
	for (i = 0; i < test; i++) {
		scanf("%lld %lld", &n1, &n2);
		//거듭 제곱 계산 코드
		multi = 1; //초항
		for (j = 0; j < n2; j++) {
			multi *= n1; //거듭 제곱 만드는 중~
			multi %= 10; //숫자가 커지면 메모리에 다 담지 못하므로 마지막 수만 취해서 n1 계속 곱해주는 거로~
		}
		//10으로 나눈 나머지가 0 이므로 10번 컴퓨터에 배정해주려면, multi가 0 인걸 10으로 후조정 해줘야 함
		if (multi == 0) {
			multi = 10;
		}
		//마지막으로 출력되는 컴퓨터 번호 출력
		printf("%lld", multi);
		//줄바꿈은 마지막 테스트 전에~
		if (i != test - 1) {
			printf("\n");
		}
	}


	return 0;
}

//메모리 용량 때문에 숫자 짤리는 것, 숫자 규칙에 따라 10으로 나눈 나머지는 마지막 수만 계속 곱해주면 되므로, for문에서 두 수를 곱한 후 마지막 수만 취한다.
//입력 버퍼와 출력 버퍼는 구분되어 있으므로, 입력 다 받고 출력할 필요X