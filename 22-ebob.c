#include <stdio.h>

int eyoc(int s1, int s2) {
    if (s2 != 0)
        return eyoc(s2, s1 % s2);
    else
        return s1;
}

int main() {
    int s1, s2;
    printf("Lutfen iki tane pozitif tam sayi degeri giriniz: ");
    scanf("%d %d", &s1, &s2);
    printf("%d ve %d nin EBOB'u : %d", s1, s2, eyoc(s1, s2));
    return 0;
}

