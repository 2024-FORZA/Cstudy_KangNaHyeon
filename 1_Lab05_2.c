//10807
# include <stdio.h>

int main() {
	int x[100],i,j,p,k=0;
	scanf_s("%d", &i);


	for (j = 0; j < i; ++j) {
		scanf_s("%d", &x[j]);
	}



	scanf_s("%d", &p);
	for (j = 0; j < i; ++j) {
		if (x[j] == p) {
			k++;
		}
	}

	printf("%d", k);

	return 0;
}
