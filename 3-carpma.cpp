#include<stdio.h>

long carpma(int sayi1,int sayi2) {
	return sayi1*sayi2;
	}
	
	
main (){
	int islem;
	int i=0;
	int sayi1,sayi2;
	
	for(;;){
	printf("Cikmak icin iki sayi degerine de 111 giriniz.");
	printf("\nIlk sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	
	switch(islem){
	
	case 1:
	long sonuc;
	sonuc = carpma(sayi1,sayi2);
	printf("%d\n\n",sonuc);
	break;
	
	case 111:
	i=111;
	break;
	
	default:
	printf("Gecerli tuslara basiniz.");
	break;
	
	}
	if (sayi1==111 && sayi2==111) {
		break;
	}
	
	}
	return 0;
}
