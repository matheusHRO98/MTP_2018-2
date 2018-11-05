//NOME : matheus henrique rodrigues de oliveira
// MATRICULA : 11811EBI022

#include <stdio.h>

void ConverterBinario(unsigned n)
{
	int i = 0;
	unsigned mask = 1 << 31;
	printf("%d (", n);
	for (i = 0; i <= 32; i++)
	{
		char c = n & mask ? '1' : '0';
		n <<= 1;
		printf("%c", c);
	}
	printf(")");
}

int main()
{
	int opcao = 0, num1, num2;
	printf("CALCULADORA, digite 0 para sair.\n\n");
	while (1)
	{
		printf("\nDigite a opcao: ");
		scanf("%d", &opcao);

		if (opcao == 0)
			break;

		switch (opcao)
		{
		case 1:
			printf("\nDigite um numero: ");
			fflush(stdin);
			scanf("%d", &num1);

			printf("NOT ");	ConverterBinario(~num1); printf(" : "); ConverterBinario(num1);
			break;

		case 2:
			printf("\nDigite um numero: ");
			scanf("%d", &num1);
			printf("\nDigite outro numero: ");
			scanf("%d", &num2);

			ConverterBinario(num1); printf(" AND "); ConverterBinario(num2);
			printf(" : "); ConverterBinario(num1&num2);
			break;

		case 3:
			printf("\nDigite um numero: ");
			scanf("%d", &num1);
			printf("\nDigite outro numero: ");
			scanf("%d", &num2);

			ConverterBinario(num1); printf(" OR "); ConverterBinario(num2);
			printf(" : "); ConverterBinario(num1 | num2);
			break;

		case 4:
			printf("\nDigite um numero: ");
			scanf("%d", &num1);
			printf("\nDigite outro numero: ");
			scanf("%d", &num2);

			ConverterBinario(num1); printf(" XOR "); ConverterBinario(num2);
			printf(" : "); ConverterBinario(num1 ^ num2);
			break;

		case 5:
			printf("\nDigite um numero: ");
			scanf("%d", &num1);
			printf("\nDigite outro numero: ");
			scanf("%d", &num2);

			ConverterBinario(num1); printf(" >> "); ConverterBinario(num2);
			printf(" : "); ConverterBinario(num1 >> num2);
			break;

		case 6:
			printf("\nDigite um numero: ");
			scanf("%d", &num1);
			printf("\nDigite outro numero: ");
			scanf("%d", &num2);

			ConverterBinario(num1); printf(" << "); ConverterBinario(num2);
			printf(" : "); ConverterBinario(num1 << num2);
			break;
		default:
			break;
		}
	}
}

