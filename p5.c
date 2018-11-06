//NOME : matheus henrique rodrigues de oliveira
// MATRICULA : 11811EBI022


#include <stdio.h>

int main()
{
	char *pont;
	char str[256];

	int *ponts;
	int i = 0, contador = 0, option = 0, text[256];

	do
	{
		do
		{

        printf("\n1.Codificar");
			printf("\n2.Decodificar");
			printf("\n0. Sair\n");
			printf("\nDigite a opcao desejada: ");
			scanf("%d", &option);
			getchar();
		}
		while(option != 0 && option != 1 && option != 2);

		switch(option)
		{
			case 0:
				return 0;
			case 1:
				for(i; i < 256; i++) str[i] = '\0';
				printf("\nDigite os caracteres caracteres: ");
				fgets(str, 256, stdin);

				for(contador=0; str[contador] != '\0'; contador++);

				ponts = (int*)str;
				printf("\nA frase codificada eh: \n");

				for(i = 0; i < contador; i++) if(*(ponts + i) != 0 ) printf("%i ", *(ponts + i));
				printf("\n\n");
				break;

			default :
				printf("\nDigite 0 e aperte enter\n");
				pont = (char*)text;
				i = 0; contador = 0;
				printf("Digite o numero desejado: \n");

				do
				{
					scanf("%d", &contador);
	 				getchar();
					text[i] = contador;
					i++;
				}while(contador != 0);

				pont = (char*)&text;
				printf("\nOs caracteres decodificados sao: \n");

				for(i = 0; i < sizeof(text) && *(pont+i) != 0; i++) printf("%c", *(pont+i));
				printf("\n\n");
				break;
		}
	}while(option != 0);

	return 0;
}
