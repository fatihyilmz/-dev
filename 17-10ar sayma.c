#include <stdio.h>

int fonk(){
static int a; 
a= a + 10;
return(a);
}


int main(){ 
int i;
for(i=1; i<=8; i++)
printf ("%d ", fonk());
}

