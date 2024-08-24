//1152
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000000];
	long long int cnt = 0,i;

	scanf("%[^\n]", str); // \n�� �� ��� ���� �޾Ƶ��̱� (�̷��� �������� scanf�Է� ����Ǵ°� ���� �� ���� (AA BB CC, %s: "AA", %[^\n]: "AA BB CC")
	
		if(str[0]==' '&& strlen(str)==1) {
			cnt = 0;
		}
		else {
			for (i = 1; i < strlen(str)-1; i++) {
				if (str[i - 1] != ' ' && str[i] == ' ' && str[i + 1] != ' ') { //A[i]�� 1�� ���� ''(��������ǥ) ��� �� (""(ū����ǥ)�� �ƴ϶�~)
					cnt++;
				}
			}
			cnt++;
		}

	printf("%lld", cnt);

	return 0;
}

/*
scnaf Ư¡
1. space == enter == �迭 ���� (str�� A�� ��� �� �����̽� ġ�� B�� ���� str�� B�� ��ü�ȴ�.)
>> �� ���� scanf�� �Է� �� �����̽��� ��� ���� ������ %s�� ������ �� ���ٴ� �� Ex) AA BB CC �� str�迭�� "AA BB CC"�� ����Ǵ� ���� �ƴ϶� str�� "AA"->"BB"->"CC"�� ��� ��ü�Ǹ� ����Ǵ� ��
*/

/*
Q.break�� ������ space(32), scanf �� enter(10 == \n), ����(20)�� �ƽ�Ű�ڵ�� ���Ϸ��µ� �� ������ �ȵ���??
A.
if (A == "\0") { //�ǵ�: enter�� ġ�� break�� �ݺ������� ���Ͷ�
	break;
}
>> A�� str ��ü��. ���� A="�Է¹���\0" ����, "�Է¹���"�� "\0"�� ������ ���� �� �ƴ�
*/

/*
break�� �� 'break ����'�� ��� ������
sol) �ٸ� �迭 B�� an-1������ �迭�� A�� �����صα�, ���纻 �������� �迭B�� �迭A�� ������ ������ �ܾ ������ ���̹Ƿ�, �̶� break ġ�� �� ¥�� ��
*/