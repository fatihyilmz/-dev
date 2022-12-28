#include<stdio.h>

int asal(int sayi) {
int i;
for (i = 2; i < sayi; i++) {
if (sayi % i == 0) {
return 0;
}

}
}


int main() {
int n;
printf("Bir tamsayi giriniz: ");
scanf("%d",&n);

if(n==1){
	printf("Bu sayi bir asal sayi degildir.");
}

else if (asal(n) == 0 ) {
printf("Bu sayi bir asal sayi degildir.");
}
else {
printf("Bu sayi bir asal sayidir.");
}

return 0;
}
