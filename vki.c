#include <stdio.h>
int main(){
     float boy,kilo,ind;

     printf("kilonuzu girin : "); 
     scanf("%f",&kilo);
     printf("metre cinsinden boyunuzu girin :  "); 
     scanf("%f",&boy);
     ind=kilo/(boy*boy);

     printf("vucut kitle indeksiniz : %f \n", ind);
     if(ind<18)
          printf("zayif");
     else if(ind>=18 && ind<25)
          printf("normal");
     else if(ind>=25 && ind<30)
          printf("kilolu");
     else if(ind>=30 && ind<40)
          printf("obez");
     else 
          printf("ileri derece obez");

     return 0;
}
