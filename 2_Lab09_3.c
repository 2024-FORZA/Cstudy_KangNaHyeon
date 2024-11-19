//2991
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int count(int arrive, int cycle, int attack) { //��� �����ð�, �ֱ�, �� ���� �ð�
	int cnt = 0;

	// �ֱ�: 4 �� ��, 4*n+1 < �����ð� < 4*n+���ݽð�
	// ����: 2 �޽�: 2 (�ֱ�: 2+2) -> 1,2  5,6  9,10 ... 4*n+1, 4*n+2
	int n = 0;
	// 999��°���� ����
	while (cycle * n + attack <= 999) {
		// 4*n + 1 < ��� ���� �ð� < 4*n + ���ݽð� >> �� ���� �ð��� ������ cnt++
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

	//��1���� ���� ���ϴ� �ð� + ��2���� ���� ���ϴ� �ð�
	post_cnt = count(post_arrive, attack1 + rest1, attack1) + count(post_arrive, attack2 + rest2, attack2);
	milk_cnt = count(milk_arrive, attack1 + rest1, attack1) + count(milk_arrive, attack2 + rest2, attack2);
	news_cnt = count(news_arrive, attack1 + rest1, attack1) + count(news_arrive, attack2 + rest2, attack2);

	printf("%d\n%d\n%d", post_cnt, milk_cnt, news_cnt);

	return 0;
}