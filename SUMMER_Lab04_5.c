//4539
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int test, i,p, num,j = 0, result[100000];
	
	scanf("%lld", &test);
	for (i = 0; i < test; i++) {
		scanf("%lld", &num);
		j = 0; //�ݺ������� �ʱ�ȭ �߿� (�� �׷��� j �����Ǽ� ��������)
		if(num>10){ //num�� 10���� Ŭ ���� �߰� ���� �ʿ�
			while(num!=num%10) { //num�� 10���� Ŭ ��, 100���� Ŭ ��,,,, '�ݺ�'�Ǵ� ���ǵ� '�ݺ�'������ ǥ���ص� �� (���� ���, ������ ���� ����)
				if (num % 10 >= 5) { //�ݿø�
					result[j] = 0;
					num /= 10;
					num++;
				}
				else { //�ݳ���
					result[j] = 0;
					num /= 10;
				}
				j++;
			}
			result[j] = num;
			
			for (p = j; p >=0; p--) {
				printf("%lld", result[p]);
			}
		}

		else { //num�� 10���� ������ num���� ����Ʈ ���ָ� �� 
			printf("%lld", num);
		}

		if (i != test) {
			printf("\n");
		}
	}

	return 0;
}

//result[int, long long int�� 10^5���� ���ȣ �ȿ� �� �� �ִٰ� �����ϱ�]: �̰� �ѱ�� �ܼ�â�� �ƹ��͵� �Է� �ȵǰ� ����