#include <stdio.h>

int printprimeno(int n) {
    int i, j;

    if (n <= 1) {
        printf("No prime numbers.");
    }
    else {
        for (i = 2; i <= n; i++) {

            for (j = 2; j <= i - 1; j++) {
                if (i % j == 0) {
                    break;
                }
            }

            if (j == i) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}

int main() {
    int n, result;

    printf("Enter your number: ");
    scanf("%d", &n);

    printf("Prime numbers are: ");
    result = printprimeno(n);

    return 0;
}