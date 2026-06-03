#include <stdio.h>
int main () {
    int i,n,j,k;
    printf("enter your number: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        
        if (i==1) {
            printf("*");
            for (k=0;k<(n-i);k++) {
                printf(" ");
            }
        } else {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}