//1158
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, k, i, cnt = 0, centinul = 0;
	int num[5001];

	scanf("%d %d", &n, &k);

	//1~n ���ҷ� ������ �迭 ����
	for (i = 0; i < n; i++) {
		num[i]=i + 1;
	}

	i = 0;
	while (centinul != n) { //n���� ���Ҹ� ��� ����� �� ���ʰ��� n�� �� ����
		//���Ŵ����� ���� ����鿡 ���� ���� (�̹� ������ ����� 0���� �ٲ���⿡~)
		if (num[i] != 0) {
			cnt++;
			if (cnt == k) {
				//�迭 ��� ������ ���߱� ����
				if (centinul == 0) {
					printf("<");
				}
				printf("%d", num[i]);
				if (centinul < n - 1) {
					printf(", ");
				}
				else if (centinul == n-1) {
					printf(">");
				}

				num[i] = 0; //k��° ��� ����
				cnt = 0; //���²�� �ٽ� ���� ���� cnt=0���� �ʱ�ȭ
				centinul++; //�� �� ���Ŵ��ߴ��� ��� (n�� ��� ���Ŵ��ϸ� while ������)
			}
		}
		i++;
		//�ε����� ��ȯ�� �� �ְ� �������� �Ѿ�� 0���� ������
		if (i == n)
			i -= n;
	}

	return 0;
}