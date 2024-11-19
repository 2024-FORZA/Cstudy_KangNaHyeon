//2991
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int count(int arrive, int cycle, int attack) { //사람 도착시간, 주기, 개 공격 시간
	int cnt = 0;

	// 주기: 4 일 때, 4*n+1 < 도착시간 < 4*n+공격시간
	// 공격: 2 휴식: 2 (주기: 2+2) -> 1,2  5,6  9,10 ... 4*n+1, 4*n+2
	int n = 0;
	// 999번째까지 따짐
	while (cycle * n + attack <= 999) {
		// 4*n + 1 < 사람 도착 시간 < 4*n + 공격시간 >> 개 공격 시간과 맞으면 cnt++
		if (cycle * n + 1 <= arrive && arrive <= cycle * n + attack) {
			cnt++;
			break;
		}
		n++;
	}

	return cnt;
}

int main() {
	int post_arrive, milk_arrive, news_arrive, attack1, rest1, attack2, rest2;
	int post_cnt, milk_cnt, news_cnt;

	scanf("%d %d %d %d", &attack1, &rest1, &attack2, &rest2);
	scanf("%d %d %d", &post_arrive, &milk_arrive, &news_arrive);

	//개1에게 공격 당하는 시간 + 개2에게 공격 당하는 시간
	post_cnt = count(post_arrive, attack1 + rest1, attack1) + count(post_arrive, attack2 + rest2, attack2);
	milk_cnt = count(milk_arrive, attack1 + rest1, attack1) + count(milk_arrive, attack2 + rest2, attack2);
	news_cnt = count(news_arrive, attack1 + rest1, attack1) + count(news_arrive, attack2 + rest2, attack2);

	printf("%d\n%d\n%d", post_cnt, milk_cnt, news_cnt);

	return 0;
}