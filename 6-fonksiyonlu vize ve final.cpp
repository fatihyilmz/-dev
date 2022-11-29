#include<stdio.h>

long ortalama(int vize,int final) {
	return (vize*0.6+final*0.4);
	}
	
	
main (){
	int islem;
	int i=0;
	int vize,final;
	
	for(;;){
	printf("\nCikmak icin iki not degerine de 111 giriniz.");
	printf("\nVize notunuzu giriniz: ");
	scanf("%d",&vize);
	printf("Final notunuzu giriniz: ");
	scanf("%d",&final);
	
	
	switch(islem){
	
	case 1:
	long sonuc;
	sonuc = ortalama(vize,final);
	printf("Ortalamaniz: %d",sonuc);
	
	
		
	if  ( sonuc > 85 ){
	printf("\nHarf notunuz AA\n");
	}
	else if ( sonuc > 75 ){
	printf("\nHarf notunuz BA\n");
	}
	else if ( sonuc > 65 ){
	printf("\nHarf notunuz BB\n");
	}
	
	else {
	printf("\nHarf notunuz FF\n");
	}
	
	break;
	
	case 111:
	i=111;
	break;

	default:
	printf("Gecerli tuslara basiniz.");
	break;
	
	}
	if (vize==111 && final==111) {
		break;
	}
	
	}
	return 0;
}
