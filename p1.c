/*p1.c*/
/*NOME : matheus henrique rodrigues de oliveira*/
/* MATRICULA : 11811EBI022*/
#include <stdio.h>

int main(){

	int i=0, estado=0;
	char bits[256];
	printf("Insira uma sequencia binaria: \n");
	scanf("%s",bits);
	while(bits[i] != '\0')
	{  if (estado == 0 && bits[i] == '0')
			estado = 0;
		else if (estado == 0 && bits[i] == '1')
			estado = 1;
		else if (estado == 1 && bits[i] == '0')
			estado = 2;
		else if (estado == 1 && bits[i] == '1')
			estado = 0;
		else if (estado == 2 && bits[i] == '0')
			estado = 1;
		else if (estado == 2 && bits [i] == '1')
			estado = 2;
		i++;
	}
	printf("O estado e: %d. \nA sequencia %s ",estado ,bits);
	if(estado == 0)
	printf("e multipla de 3.");
	else
	printf("nao e multipla de 3.");
	return 0;
	}
