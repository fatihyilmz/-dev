#include <stdio.h>


void cumleyiTersCevir() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        cumleyiTersCevir();
        printf("%c", c);
    }
}

int main() {
    printf("Lutfen bir cumle giriniz : ");
    cumleyiTersCevir();
    return 0;
}


