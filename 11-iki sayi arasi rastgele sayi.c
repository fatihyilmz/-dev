#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rastgeleSayiVer(int baslangic, int bitis) {
 
	srand(time(NULL));
 
	int rastgele = (rand() % baslangic) + (bitis - baslangic);
 
	if(rastgele == baslangic) {
		
		rastgele++;
	}
 
	return rastgele;
}

int main()
{
     
    int baslangic;
    int bitis;
   
	printf("Lutfen iki deger de pozitif tam sayi olsun ve ilk girdiginiz sayi daha kucuk olsun.");   
   
 	printf("\nBaslangic degeri giriniz : "); 
	 
	scanf("%d",&baslangic);
	
	printf("\nBitis degeri giriniz : "); 
	 
	scanf("%d",&bitis);
	
	int rastgele = rastgeleSayiVer(baslangic, bitis);
	
	printf("\n%d - %d arasi rastgele sayi: %d\n",baslangic, bitis, rastgele); 

	 
    return 0;
}
