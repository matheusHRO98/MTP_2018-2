//NOME : matheus henrique rodrigues de oliveira
// MATRICULA : 11811EBI022

#include <stdio.h>

void inv (char vet[]){
	int i, j, c = 0, au;
	for(i = 0; vet[i] != '\0'; i++, c++);
	j = c - 1;
	for(i = 0; i < j; i++, j--){
		au = vet[i];
		vet[i] = vet[j];
		vet[j] = au;
	}
	vet[c] = '\0';
}

int pot(int num, int p)
{
	int i, potencia = 1;
	for(i = 0; i < p; i++, potencia*=num);
	return (potencia);
}

int bindec(char str[])
{
	inv(str);
	int i,soma = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
			soma = soma + pot(2, i)*(str[i]-48);
	}
	return soma ;
}

void decbin(int q){
	int i, flag = 0, binario[256], j;
	j = q;
	for(i = 0; flag < 1; i++){
		binario[i] = j % 2;
		j /= 2;
		if(j == 0 || j == 1){
		 binario[i + 1] = j;
			j = i + 1;
			flag++;
		}
	}
	printf("\nEle em binario:  ");
	for(j; j >= 0; j--){
		printf("%d", binario[j]);
	}
}

int main(){
	char bits[256];
	int num,op =0, res;
	do{
		printf("\nEscolha uma opcao: \n1- Binario para decimal \n2- Binario para hexadecimal \n3- Hexadecimal para decimal");
		printf("\n4- Hexadecimal para binario \n5- Decimal para binario \n6- Decimal para hexadecimal \n7- Octal para decimal");
		printf("\n8- Decimal para octal \n9- Sair do programa \n\nDigite: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("\nDigite um numero binario: ");
				scanf("%s", bits);
				printf("\nEle em decimal: %d", bindec(bits));
				break;
			case 2:
				printf("\nDigite um numero binario: ");
				scanf("%s", bits);
				printf("\nEle em hexadecimal: %X", bindec(bits));
				break;
			case 3:
				printf("\nDigite um numero hexadecimal: ");
				scanf("%x", &num);
				printf("\nEle em decimal: %d", num);
				break;
			case 4:
				printf("\nDigite um numero hexadecimal: ");
				scanf("%x", &num);
				decbin(num);
				break;
			case 5:
				printf("\nDigite um numero decimal: ");
				scanf("%d", &num);
				decbin(num);
				break;
			case 6:
				printf("\nDigite um numero decimal: ");
				scanf("%d", &num);
				printf("\nEle em hexadecimal: %X", num);
				break;
			case 7:
				printf("\nDigite um numero octal: ");
				scanf("%o", &num);
				printf("\nEle em decimal: %d", num);
				break;
			case 8:
				printf("\nDigite um numero decimal: ");
				scanf("%d", &num);
				printf("\nEle em octal: %o", num);
				break;
			default:
				if(op != 9){
					printf("\nOpçao invalida");
				}
		}
	}while(op!= 9);
	return 0;
}
