#include <stdio.h>
#include <math.h>


int donustur(long long n) {
  int on = 0, i = 0, y;

  while (n!=0) {
    y = n % 10;
    n /= 10;
    on += y * pow(2, i);
    ++i;
  }

  return on;
}

int main() {
  long long n;
  printf("Lutfen ikilik tabanda bir sayi giriniz: ");
  scanf("%lld", &n);
  printf("ikilik tabanda: %lld =  ondalik tabanda: %d ", n, donustur(n));
  return 0;
}

