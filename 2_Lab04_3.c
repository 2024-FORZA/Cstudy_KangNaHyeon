//2525
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long time, hour, min;

	//이 블럭은 틀리 이유 없음
	scanf("%lld %lld", &hour, &min);
	scanf("%lld", &time);

	//따라서 여기서 논리 오류 난 것 (조건을 잘못 썼거나, 연산을 잘못했거나) >> 그냥 논리 갈아엎음 >> 맞았음~~
	if (min + time < 60) {
		printf("%lld %lld", hour, min + time);
	}
	else {
		printf("%lld %lld", (hour + (min + time) / 60) % 24, (min + time) % 60);
	}

	return 0;
}

/*vs에서는 맞고 백준에서는 틀리고 (애초에 이걸 막는 좋은 방법: '미리'논리 짜고 -> 코딩으로 구현 (코딩하면서 논리 짜는거 지양하기))
1. 블록별로 무조건 맞는 부분(scanf)과 확실히 맞았는진 모르는 부분(if문) 나눈다
2. 논리를 다 갈아엎는다

둘 중 하나 하기로 정리했어서, 블록별로 맞는 부분 확실히 맞았는진 모르는 부분 나누고 if문 논리가 잘못된거니, 논리를 갈아엎기로 함
time을 각각 hour와 min에 더하는 게 아니라, min 기준으로 min+hour가 60을 넘느냐 안 넘느냐로 따짐
*/