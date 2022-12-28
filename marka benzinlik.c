#include<stdio.h>


int main() {
	
	int i=0;
	int marka;
	float benzintutari;
	int M,F,R,H,MB,FB,RB,HB;
	M=0;F=0;R=0;H=0;MB=0;FB=0;RB=0;HB=0;
	
	
	
	printf("Markalar\n\nMercedes = 1\nFerrari = 2\nRenault = 3\nHonda = 4\n\n\n");
	
	while (i !=5){
	
	
	printf("\nMarkayi seciniz: ");
	scanf("%d",&marka);
	printf("\nAlmak istediginiz tutari giriniz: ");
	scanf("%f",&benzintutari);
		
	
	
	
    
    
    
	switch(marka) {
	 
	   
		case 1:
		M++;
		MB += benzintutari;
		
		
		break;

		
		case 2:
		
		F++;
		FB += benzintutari;
		break;
		
		case 3:
		
		R++;
		RB += benzintutari;
		break;
		
		case 4:
		H++;
		HB += benzintutari;
		break;
		
		
		case 111:
		i=5;	
		break;
		
		default:
		printf("\nLutfen gecerli bir marka giriniz.\n");
		break;

	}	
		
	
	}
	
	
	
		
	if ( M > F && M > R && M > H )
	{
		printf("\nEn cok gelen arac: Mercedes");
	}
	
	if ( F> M && F > R && F > H ) 
	{
		printf("\nEn cok gelen arac: Ferrari");
	}
	
	if ( R> M && R > F && R > H )
	{
		printf("\nEn cok gelen arac: Renault");
	}
	
	if ( H> M && H > F && H > R )
	{
		printf("\nEn cok gelen arac: Honda");
	}
	
	if ( MB > FB && MB > FB && MB > HB )
    {
        printf("\nEn fazla benzin alan arac markasi: Mercedes");
    }
    
	if ( FB > MB && FB > RB && MB > HB )
    {
        printf("\nEn fazla benzin alan arac markasi: Ferrari");
    }
    
    if ( RB > MB && RB > FB && RB > HB )
    {
        printf("\nEn fazla benzin alan arac markasi: Renault");
    }
    
    if ( HB > MB && HB > FB && HB > RB )
    {
        printf("\nEn fazla benzin alan arac markasi: Honda");
    }
	
	
	
	
	
	
	
	
	
	return 0;
}
