#include <stdio.h>
#include <stdlib.h>


char* kelimeSonHarfleriniVer(char * cumle) {
 
	char *sonHarfler = (char *)malloc(50 * sizeof(char));
	
	int i = 0;
	
	int sonHarflerIndex = 0;
	
	do {
	
		if(cumle[i] == ' ') {
		
			sonHarfler[sonHarflerIndex++] = cumle[i-1];
			
		}

		i++;
		
	

	} while(cumle[i] != '\0' && cumle[i] != '\n');
 	
	sonHarfler[sonHarflerIndex++] = cumle[i-1];
 
	sonHarfler[sonHarflerIndex++] = '\0';
 
	return sonHarfler;
}

int main()
{
     
    char cumle[250];
   
 	printf("\nString giriniz: "); 
	 
	fgets(cumle, sizeof cumle, stdin);
	 
	char * kelimeSonHarfleri = kelimeSonHarfleriniVer(cumle);
	
	printf("Kelimenin son harfi: %s\n", kelimeSonHarfleri); 
		 
    return(0);
}
