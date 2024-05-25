//10809
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
		char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		char input[100];
		int newarr[100];
		int i, j;

		scanf("%s", input);

		for (i = 0; i < strlen(alphabet); ++i) {
			for (j = 0; j < strlen(input); ++j) {
				if (input[j] == alphabet[i]) {
					newarr[i] = j;
					break;
				}
				else if (j == (strlen(input) - 1) && input[j] != alphabet[i]) {
					newarr[i] = -1;
					break;
				}
			}
		}
		for (i = 0; i < 26; i++) {
			printf("%d ", newarr[i]);
		}
		return 0;
}