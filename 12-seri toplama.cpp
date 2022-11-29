#include <stdio.h>


int seriToplama(int x) {

	int toplam = 0;
	
	for(int i = 1; i <= x; i++){
			
	    toplam = i + toplam;

	}

	return toplam;
}

int main()
{
     
    int x;
   
 	printf("\nx degeri giriniz : "); 
	 
	scanf("%d",&x);
	
	int seriToplam = seriToplama(x);
	
	printf("\nx icin seri toplam: %d \n", seriToplam); 

	 
    return(0);
}

