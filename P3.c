//NOME : matheus henrique rodrigues de oliveira
// MATRICULA : 11811EBI022

#include <stdio.h>

int main(){
	int i,cont=0;
	char numero[256];
	printf("\nInsira um numero:");
	scanf("%s",numero);
	for(i=0;numero[i]!='\0'; i++)
	{
       if(numero[i] >='0' && numero[i] <='9' ) 
       {
       	printf("%d",numero[i]-'0');
       	cont++;
       }
	}
	if(cont==0)
	printf("0");
	return 0;}

