//11005
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int num, N, remainder, i = 0,j, result[31] = {-1};

	scanf("%lld %lld", &num, &N);
	while (1) { //if ������ ����: num�� N���� ū�� ������ Ȥ�� remainder�� 10���� ũ�ų� ������
		//num >= N�� �� num�� ��� ������ ������ result�� ���� ��
		if (num >= N) {
			remainder = num % N;
			//�������� 10���� Ŭ ���� ���ο� ���� ���� ��� ��
			if (remainder >= 10) { //remainder >= 10 �� num >= 10�� �Ἥ ����������
				remainder += 55; //ascii�ڵ� Ư¡ �̿��� �� (10>>65(ascii�ڵ忡�� 'A'))
				result[i]=remainder;
			}

			//�������� 10���� ���� ���� ���� ������ ���� ���� �Ǵϱ� �״�� result�� ���� ��
			else {
				result[i] = remainder;
			}
			num = num / N;
			i++;
		}

		//num >= N �δ� ������ ���� �������� ��� �ȵǼ� ���� ����
		else {
			//�������� 10���� Ŭ ���� ���ο� ���� ���� ��� ��
			if (num >= 10) { //num<N�� ���� num ��ü�� remainder�� ��ġ�̹Ƿ� �� num ��.
				num += 55; //ascii�ڵ� Ư¡ �̿��� �� (10>>65(ascii�ڵ忡�� 'A'))
				result[i] = num;
				break;
			}

			//�������� 10���� ���� ���� ���� ������ ���� ���� �Ǵϱ� �״�� result�� ���� ��
			else {
				result[i] = num;
				break;
			}
		}
	}

	//���� ��ȯ�� ������ ���Ѱ� ������ ����Ѱ� ���̴ϱ� ������ ����ϰ� ��
	for (j = i; j >= 0; j--) {
		if (result[j] >= 10) {
			printf("%c", result[j]);
		}
		else {
			printf("%lld", result[j]);
		}
	}

	return 0;
}
/*
(char�� ���� Ư¡)
1. char�� ������ ������ 'ASCII �ڵ� ��(����)'���� �����
2. ���� ��: ���������δ� ��ASCII �ڵ� ��(����)������ �����
3. ��� ��: ������ �����ڿ� ���� ��ascii �ڵ忡 �ش��ϴ� ���ڳ� �������� ����� �� ����
ex)	char ch = 'A';
	int num = ch + 1; // 'A'�� ASCII �� 65�� 1�� ����
	printf("%c\n", num); // 'B' ��� ****�̰� �̿��Ѱ�****
	printf("%d\n", num); // 66 ���

(�� Ư¡ ����� �ٸ� ��)
char�� int�� �ٲٴ� �� ex) �ٲٷ��� ����-'0' >> ��1��-'0'
*/

/*
(�ִ��� �ߺ��Ǵ� �κ��� ���̷��� ��)
ex)
	remainder = num % N;
	if (remainder >= 10) { //remainder >= 10 �� num >= 10�� �Ἥ ����������
		remainder += 55; //ascii�ڵ� Ư¡ �̿��� �� (10>>65(ascii�ڵ忡�� 'A'))
		result[i]=remainder;
	}
	else {
		result[i] = remainder;
	}
	num = num / N;
	i++;

������ 
remainder = num % N;
num = num / N;
i++;
�� if & else�� �ȿ� ���� �ڵ� ®���� (�������� �ߺ� �����̶� �M)
*/