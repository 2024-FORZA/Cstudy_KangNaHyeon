//1159
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int index[27]={0}, i, j, k, m, num = 0, count = 0, c = 0;
	char name[31], first[151], alphabet[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	scanf("%d",&num);
	for (i = 0; i < num; i++) {
		scanf("%s", name);
		first[i] = name[0];
	}

	//first[]�� ���Ұ� alphabet[]�� ���Ҷ� ������, �ش� �˹ٺ��� �ε����� index�� �ε����� ���� �ؼ�, �迭 index�� '�ε����� �ش��ϴ� ����+1' �ǰ� ��.
	//�̷��� �迭 alphabet�� index ��������ν� '�ش� ���ĺ� ����'�� '�� ��' ���Դ��� �� �� ��� ����
	for (j = 0; j < num; j++) {
		for (k = 0;k<27; k++) {
			if (first[j]==alphabet[k]) {
				index[k]++;
			}
		}
	}

	//'���' 'index[m] >= 5�̸� index[m] < 5 ����X' �� ��Ÿ���� ���� ���� c ����, �̷��� for���� index[m] >= 5 �� index[m] < 5 �� if������ �� �־� �߻��ϴ� ���� ���� ����'
	for (m = 0; m < 27; m++) {
		if (index[m] >= 5) {
			printf("%c", alphabet[m]);
			c++;
		}
		//���� index[m] < 5 ������ index[m]>5 �� "PREDAJA"�� ��µǾ��� ��
	}
	if (c == 0) {
		printf("%s", "PREDAJA");
	}

	return 0;
}
//<�˰� �� ��>
// �迭�� ���� ����/���ڷ� �ʱ�ȭ�ϴ� �� ex) arr[27]={0} (27���� ���� ��� 0���� �ΰڴٴ� ��)