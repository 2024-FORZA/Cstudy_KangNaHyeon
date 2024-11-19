//2851
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i, result, n[10], sum = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 10; i++) {
        sum += n[i];
        if (sum >= 100) {
            result = ((sum - 100) > (100 - (sum - n[i]))) ? sum - n[i] : sum;
            break;
        }
    }

    printf("%d", result);

    return 0;
}