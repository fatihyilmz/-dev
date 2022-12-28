#include<stdio.h>
int main() {
    int i, space, rows, f=0;
    printf("Satir Sayisi : ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i,f=0) {
        for (space=1; space<=rows-i; ++space)
        { printf("  "); }
        while (f!=2*i-1) {
            printf("* ");
            ++f;
        }
        printf("\n");
    }    
    return 0;
}
