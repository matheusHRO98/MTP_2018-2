#include <stdio.h>

void conversor(int base_original, int base_convertida)
{
	int num = 0, num_conv = 0, i = 0, j = 0, c = 1;
	int num_convertido[100];
	char num_bin[100];

	switch(base_original)
	{
		case 2:
			printf("\nDigite o numero em binario: ");
 			scanf("%s", num_bin);
 			break;
 		case 8:
 			printf("\nDigite o numero em octal: ");
 			scanf("%o", &num);
 			break;
 		case 10:
 			printf("\nDigite o numero em decimal: ");
 			scanf("%i", &num);
 			break;
 		case 16:
 			printf("\nDigite o numero em hexadecimal: ");
 			scanf("%x", &num);
 			break;
	}

	if(base_original == 2 && base_convertida == 10)
	{
		for(i = 0; num_bin[i] != '\0'; i++);
		i--;
		for(int k = i; k >= 0; k--)
		{
			if(num_bin[k] == '0') num_convertido[k] = 0;
			else if(num_bin[k] == '1') num_convertido[k] = 1;
		}
		j = i;
		while(j >= 0)
		{
			while(c <= i-j)
			{
				num_convertido[j] *= 2;
				c++;
			}
			num_conv += num_convertido[j];
			c = 1;
			j--;
		}
		printf("\nNumero conv: %i", num_conv);
	}
	else if(base_original == 2 && base_convertida == 16)
	{
		for(i = 0; num_bin[i] != '\0'; i++);
		i--;
		for(int k = i; k >= 0; k--)
		{
			if(num_bin[k] == '0') num_convertido[k] = 0;
			else if(num_bin[k] == '1') num_convertido[k] = 1;
		}
		j = i;
		while(j >= 0)
		{
			while(c <= i-j)
			{
				num_convertido[j] *= 2;
				c++;
			}
			num_conv += num_convertido[j];
			c = 1;
			j--;
		}
		printf("\nNumero convertido: %x", num_conv);
	}
	else if(base_original == 16 && base_convertida == 10)
	{
		printf("\nNumero convertido: %d", num);
	}
	else if(base_original == 16 && base_convertida == 2)
	{
		for(i = 0; num >= 1; i++)
		{
			num_convertido[i] = num % base_convertida;
			num /= base_convertida;
		}

		printf("\nNumero convertido: ");

		for(i -= 1; i >= 0; i--)
		{
			printf("%i", num_convertido[i]);
		}

	}
	else if(base_original == 10 && base_convertida == 2)
	{
		for(i = 0; num >= 1; i++)
		{
			num_convertido[i] = num % base_convertida;
			num /= base_convertida;
		}

		printf("\nNumero convertido: ");

		for(i -= 1; i >= 0; i--)
		{
			printf("%i", num_convertido[i]);
		}
	}
	else if(base_original == 10 && base_convertida == 16)
	{

		printf("\nNumero convertido: %x", num);
	}
	else if(base_original == 8 && base_convertida == 10)
	{
		printf("\nNumero convertido: %d", num);
	}
	else if(base_original == 10 && base_convertida == 8)
	{
		for(i = 0; num >= 1; i++)
		{
			num_convertido[i] = num % base_convertida;
			num /= base_convertida;
		}
			printf("\nNumero convertido: ");

			for(i -= 1; i >= 0; i--)
			{
				printf("%i", num_convertido[i]);
			}
	}
}

int main()
{
    int opcao = 0;


    while(1)
	{

 		printf("\n 1. Binario para Decimal");
 		printf("\n 2. Binario para Hexadecimal");
 		printf("\n 3. Hexadecimal para Decimal");
 		printf("\n 4. Hexadecimal para Binario");
 		printf("\n 5. Decimal para Hexadecimal");
 		printf("\n 6. Decimal para Binario");
 		printf("\n 7. Octal para Decimal");
 		printf("\n 8. Decimal para Octal");
 		printf("\n 0. Sair");

 		printf("\nDigite a opcao desejada: ");
		scanf("%i", &opcao);

		switch(opcao)
		{
			case 1:
				conversor(2, 10);
				break;
			case 2:
				conversor(2, 16);
				break;
			case 3:
				conversor(16, 10);
				break;
			case 4:
				conversor(16, 2);
				break;
			case 5:
				conversor(10, 2);
				break;
			case 6:
				conversor(10, 16);
				break;
			case 7:
				conversor(8, 10);
				break;
			case 8:
				conversor(10, 8);
				break;
			case 0:
				return 0;
				break;
			default:
				break;
		}
	}

	return 0;
}