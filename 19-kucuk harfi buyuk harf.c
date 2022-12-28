#include <stdio.h>


char buyuk(char kar){
 if (kar >= 'a' && kar <= 'z')
 return kar - 32;
 else
 return kar;
}

int main (){ 
char ch;
printf("Bir harf giriniz: ");
scanf ("%c", &ch); 
printf("%c\n", buyuk(ch));
}


