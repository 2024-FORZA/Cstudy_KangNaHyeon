#27433
#include <stdio.h>

int main() {
    long n=0, limit, b = 1;

    scanf_s("%ld", &limit);

    if (limit >= 1 && limit <=20) {
        for (n = 1; n <= limit; n++) {
            b = b * n;
        }
        printf("%ld", b);
    }
    if (limit == 0) {
        printf("%ld", 1);
    }

    return 0;
}