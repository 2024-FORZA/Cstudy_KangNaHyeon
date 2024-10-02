//1526
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long num, temp, error, target;

	scanf("%lld", &num);

	//num���� ���� 4 �Ǵ� 7�� �� ��, num���� -1 �ϸ鼭 1���� ������ ������ ��
	for (target = num;;target--) {
		error = 0;
		temp=target;
		//num�� 2�ڸ��� �̻��� �� (2�ڸ��� �̻��̸�, 1�ڸ����� �Ǿ��� �� 4 �Ǵ� 7���� �ľ��ϸ� �Ǵµ�..)
		if (target >= 10) {
			while (1) {
				//4�Ǵ� 7�� �̷���� �� �ƴϸ� break ġ�� ���� �� ������
				if (temp % 10 != 4 && temp % 10 != 7) {
					error++;
					break;
				}
				//4 �Ǵ� 7�� �̷���� ���̸�, 10���� ������ ������ �ڸ��� ���ڵ� �����ֱ�
				temp /= 10;

				//10���� �۾����� �� break�� �� ���� ����ġ �ʾƼ� �� �ѹ� �� ������
				if (temp < 10) {
					if (temp % 10 != 4 && temp % 10 != 7) {
						error++;
					}
					break; //break�� ���� if���� ���� 4,7�� �̷���� ���� ���ѷ��� ��~ ���� ���� if�� �ۿ� break�� �־� 1�� �ڸ� �����ְ� ����~
				}
			}
		}
		//num�� 1�ڸ��� �� ���� num��ü���� 10�� �����°� �ƴ� -1�� �ؼ� 7 �Ǵ� 4 ã�ƾ� �ؼ� ������ �ٸ�~ (���� num�� 1�� �ڸ����� ���� 2�ڸ� �ѱ� �� case ������� ��)
		else {
			if (target == 7 || target == 4) {
				printf("%lld", target);
				break;
			}
			else {
				error++;
			}
		}
		//4 �Ǵ� 7�θ� �̷���� ���ڶ�� �ش� ���� ���
		if (error == 0) {
			printf("%lld", target);
			break;
		}
	}

	return 0;
}

//����� ���������� �����. Ư�� �����
/*
(��Ǯ �� ���� �� �������� êgpt���� �ܺ� ���̺귯�� ���� �⺻���� �������θ� Ǭ Ǯ�� �����޶�� ��)

while (num > 0) {
	num /= 10;  // ���� �ڸ����� �̵�
}

���� 4/10=4��� �����ؼ� �ڵ� �������� ��� ����...4/10=0��... 4%10=4 �ΰŶ� �򰥷���...
//���� ���� �ڵ�� �������� case�� ���� ���� ('1�� �ڸ� ����', '/�ε� 1�� �ڸ� ����(%�� �򰥸� ��...)' ���� ��...)
//ȿ���� ���� �ڵ�� 2_Lab05_2_������ �����~
*/