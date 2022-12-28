#include <stdio.h>
void kare(int x); 
 int main() 
{ int sayi;
printf("Bir sayi giriniz:");
scanf ("%d", &sayi);
kare(sayi);
}

void kare(int x) 
{ printf ("Sayi: %d\nKaresi: %d\n", x, x*x);
}

