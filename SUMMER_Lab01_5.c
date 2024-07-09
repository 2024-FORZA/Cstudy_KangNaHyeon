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

	//first[]의 원소가 alphabet[]의 원소랑 같으면, 해당 알바벳의 인덱스를 index의 인덱스로 같게 해서, 배열 index의 '인덱스에 해당하는 원소+1' 되게 함.
	//이렇게 배열 alphabet과 index 사용함으로써 '해당 알파벳 문자'가 '몇 번' 나왔는지 둘 다 기록 가능
	for (j = 0; j < num; j++) {
		for (k = 0;k<27; k++) {
			if (first[j]==alphabet[k]) {
				index[k]++;
			}
		}
	}

	//'적어도' 'index[m] >= 5이면 index[m] < 5 실행X' 를 나타내기 위해 변수 c 도입, 이러면 for문에 index[m] >= 5 와 index[m] < 5 를 if문으로 다 넣어 발생하는 오류 배제 가능'
	for (m = 0; m < 27; m++) {
		if (index[m] >= 5) {
			printf("%c", alphabet[m]);
			c++;
		}
		//여기 index[m] < 5 들어갔으면 index[m]>5 라도 "PREDAJA"가 출력되었을 것
	}
	if (c == 0) {
		printf("%s", "PREDAJA");
	}

	return 0;
}
//<알게 된 점>
// 배열을 같은 문자/숫자로 초기화하는 법 ex) arr[27]={0} (27개의 원소 모두 0으로 두겠다는 것)