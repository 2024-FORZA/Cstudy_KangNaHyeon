//4673
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	long long int i, num, sum = 0;
	long long int exclude[10001] = {0};

	for (i = 1; exclude[i] <= 10000; i++) {
		num = i;
		sum = 0;
		sum += num;
		while(1){
			sum += (num % 10);
			num /= 10;
			if (num < 10) {
				if(i>=10){
					sum += num;
				}
				break;
			}
		}
		if(sum<=10000){
			exclude[sum] = sum;
		}
	}

	for (i = 1; i <= 10000; i++) {
		if(exclude[i] == 0){
			printf("%lld", i);
			if (i != 9993) {
				printf("\n");
			}
		}
	}
	
	return 0;
}


/*
Run-Time Check Failure #2 - Stack around the variable 에러 난 이유
: 이 에러는 정의한 배열에 그보다 더 많은 수를 넣으려고 할 때 생긴다. 이번 경우는 
exclude[sum] = sum;로 배열에 값을 넣으려다가 발생했다. sum은 10000까지의 수가 아닌 i로 인해 변형된 수이므로 10000보다 더 큰 값을 가질 수 있었다.
이를 간과하고 다른 조건 없이 저거만 달랑 적어뒀던게 문제였던 거다.

해결하기 위해서는 sum값을 10000내로 조건을 걸어줌으로써 해결할 수 있다. (exclude배열은 인덱스가 총 10001개이기에~) 
if(sum<=10000){
	exclude[sum] = sum;
}
*/