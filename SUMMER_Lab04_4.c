//1453
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int num=0, seat[101], nw, ex, cnt = 0;

	scanf("%d", &num);
	for (nw = 0; nw < num; nw++) {
		scanf("%d", &seat[nw]);
		for (ex = nw-1; ex >= 0; ex--) {
			if (seat[nw] == seat[ex] && seat[nw] != 101) {
				cnt++;
				seat[nw] = 101;
			}
		}
	}

	printf("%d", cnt);
	return 0;
}

//�ѹ��� �����̸� �ٲٱ�: Ctrl+H >> 2��° ĭ �� ������ Ŭ���ؾ� '���' ���� �̸� �ٲ� �� ����.