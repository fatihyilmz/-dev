#include <stdio.h>
#include <math.h>


int ondanSekize(int onlukSayi);

int main() {

    int onlukSayi;

    printf("Lutfen onluk tabanda bir sayi giriniz: ");
    scanf("%d", &onlukSayi);

    printf(" onluk tabanda %d  = sekizlik tabanda %d ", onlukSayi, ondanSekize(onlukSayi));

    return 0;
}


int ondanSekize(int onlukSayi) {
    int sekizlikSayi = 0, i = 1;

    while (onlukSayi != 0) {
        sekizlikSayi += (onlukSayi % 8) * i;
        onlukSayi /= 8;
        i *= 10;
    }

    return sekizlikSayi;
}

