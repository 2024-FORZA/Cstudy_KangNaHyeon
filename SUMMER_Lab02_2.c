//1475
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char nums[1000000] = {"NONE"};
	int i, cnt[11]={0}, sum_rest = 0, sum_69 = 0;

	scanf("%s", nums);
	for (i = 0; i < strlen(nums); i++) {
		if (nums[i] == '0') {
			cnt[0]++;
		}
		else if (nums[i] == '1') {
			cnt[1]++;
		}
		else if (nums[i] == '2') {
			cnt[2]++;
		}
		else if (nums[i] == '3') {
			cnt[3]++;
		}
		else if (nums[i] == '4') {
			cnt[4]++;
		}
		else if (nums[i] == '5') {
			cnt[5]++;
		}
		else if (nums[i] == '6') {
			cnt[6]++;
		}
		else if (nums[i] == '7') {
			cnt[7]++;
		}
		else if (nums[i] == '8') {
			cnt[8]++;
		}
		else if (nums[i] == '9') {
			cnt[9]++;
		}
	}

	for (i = 0; i < 10; i++) {
		if (cnt[i] > sum_rest && i != 6 && i != 9) {
			sum_rest = cnt[i];
		}	
	}

	sum_69 = (cnt[6] + cnt[9])/2+ (cnt[6] + cnt[9]) % 2;
	
	if (sum_rest >= sum_69) {
		printf("%d", sum_rest);
	}
	else if (sum_rest <= sum_69) {
		printf("%d", sum_69);
	}
	
	return 0;
}

/*
for (i = 0; i < 10 && i!=6 && i!=9; i++) {
		if (cnt[i] > sum_rest) {
			sum_rest = cnt[i];
		}
		printf(",%d", i);
	}
>>���: ,0,1,2,3,4,5
����: 5 ���ķ� i�� ������� ����
����: i!=6 && i!=9 ������ for���� �ɾ i=5���� ���� i=6���� for�� �ߴܵ� ���� ����...
�ذ�: i!=6 && i!=9 ������ ���� if���� ��´�. (�׷��� 6,9�� ��츸 �����ϰ� �ݺ��� ��ӵ� �״ϱ�~)
*/