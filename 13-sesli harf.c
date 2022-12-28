#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 


bool isSesliHarf(char harf){

 char sesliHarfler[10] = {'a', 'e','i', 'o','u',
				 'A', 'E', 'I', 'O', 'U'};

	for(int i = 0; i < 10; i++){
			
			if(sesliHarfler[i] == harf){
				
				return true;
			}
			
	}

	return false;
}


void sesliHarfleriDegistir(char * cumle) {
	
	int i = 0;
	do {
	
		if(isSesliHarf(cumle[i])) {
		 
		 cumle[i] = '*';
			
		}

		i++;

	} while(cumle[i] != '\0' && cumle[i] != '\n');
 
}

int main()
{
     
    char cumle[250];
   
 	printf("\nLutfen Turkce karakter icermeyen bir string giriniz:\n "); 
	 
	fgets(cumle, sizeof cumle, stdin);
	 
	sesliHarfleriDegistir(cumle);
	
	printf("> %s\n", cumle); 
		 
    return(0);
}
