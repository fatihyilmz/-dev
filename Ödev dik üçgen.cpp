#include <stdio.h>

int main() {
	
	int a,i, n;
	
	printf("lutfen istediginiz degeri giriniz: ");
	scanf("%d",&n);
	
	for (a=0; a<n ; a++){
	for (i=0;i<=a;i++){
		printf("#");
	}
	printf("\n");
}
	
	
	
	return 0;
}
