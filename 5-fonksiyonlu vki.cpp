#include<stdio.h>

long vki(int kilo,float boy) {
	return kilo/(boy*boy);
	}
	
	
main (){
	int islem;
	int i=0;
	int kilo;
	float boy;
	
	for(;;){
	printf("Cikmak icin iki degere de 111 giriniz.");
	printf("\nKilonuzu giriniz: ");
	scanf("%d",&kilo);
	printf("Metre cinsinden boyunuz giriniz: ");
	scanf("%f",&boy);
	
	
	switch(islem){
	
	case 1:
	float ind;
	ind = vki(kilo,boy);
	
	printf("vucut kitle indeksiniz : %f \t", ind);
     if(ind<18)
          printf("zayif\n");
     else if(ind>=18 && ind<25)
          printf("normal\n");
     else if(ind>=25 && ind<30)
          printf("kilolu\n");
     else if(ind>=30 && ind<40)
          printf("obez\n");
     else 
          printf("ileri derece obez\n");
	
	
	
	break;
	
	
	
	case 111:
	i=111;
	break;

	default:
	printf("Lutfen degerleri gecerli cinsten giriniz.");
	break;
	
	}
	if (kilo==111 && boy==111) {
		break;
	}
	
	}
	return 0;
}
