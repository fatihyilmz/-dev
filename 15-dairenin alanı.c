#include <stdio.h>
#define PI 3.141593
float daire(float y); 
int main() 
{ float r, s;
printf ("Dairenin yaricapini giriniz: ");
scanf ("%f", &r);
s = daire(r) ;
printf("Dairenin alani: %6.2f dir.\n",s);
}

float daire(float y)
{ float a;
a =PI * y * y;
return(a);
}
