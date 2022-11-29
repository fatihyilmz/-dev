#include <math.h>
#include <stdio.h>


int kontrolArmstrongSayisi(int n);

int main() {
   int n, sonuc;
   printf("Lutfen pozitif bir tam sayi giriniz: ");
   scanf("%d", &n);

  

  
   sonuc = kontrolArmstrongSayisi(n);
   if (sonuc == 1)
      printf("%d bir Armstrong sayisidir.", n);
   else
      printf("%d bir Armstrong sayisi degildir.", n);
   return 0;
}




int kontrolArmstrongSayisi(int sayi) {
   int orijinalSayi, kalan, n = 0, sonuc;
   double nihaisonuc = 0.0;

   
   for (orijinalSayi = sayi; orijinalSayi != 0; ++n) {
      orijinalSayi /= 10;
   }

   for (orijinalSayi= sayi; orijinalSayi != 0; orijinalSayi /= 10) {
      kalan = orijinalSayi % 10;

      
      nihaisonuc += pow(kalan, n);
   }

   
   if (round(nihaisonuc) == sayi)
      sonuc = 1;
   else
      sonuc = 0;
   return sonuc;
}
