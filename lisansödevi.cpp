#include <stdio.h>
int main(){

    float yds,ortalama,ales,final;

     printf("yds puaninizi giriniz : "); 
     scanf("%f", &yds );
     printf("ales puaninizi giriniz : "); 
     scanf("%f", &ales);
     printf("ortalama puaninizi giriniz: ");
     scanf("%f", &ortalama);


     final=(yds*0.25)+(ales*0.50)+(ortalama*0.25);
	printf("Final Notunuz: %.1f\n", final);

    if (yds<=70)
        printf("katilamazsiniz");

    if (final>60)
        printf("katilabilirsiniz");




    return 0;
}

     
