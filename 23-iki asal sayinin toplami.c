#include <stdio.h>
int asalKontrol(int n);
int main() {
  int n, i, k = 0;
  printf("Lutfen pozitif bir tam sayi giriniz: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    
    if (asalKontrol(i) == 1) {
      
      if (asalKontrol(n - i) == 1) {
        printf("%d = %d + %d\n", n, i, n - i);
        k = 1;
      }
    }
  }

  if (k == 0)
    printf("%d iki asal sayinin toplami seklinde yazilamaz.", n);

  return 0;
}


int asalKontrol(int n) {
  int i, asaldir = 1;

 
  if (n == 0 || n == 1) {
    asaldir = 0;
  }
  else {
    for(i = 2; i <= n/2; ++i) {
      if(n % i == 0) {
        asaldir = 0;
        break;
      }
    }
  }

  return asaldir;
}

