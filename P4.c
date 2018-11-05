//NOME : matheus henrique rodrigues de oliveira
// MATRICULA : 11811EBI022

#include <stdio.h>

int potencia(int num)
{
	if (num == 0)
		return 1;

	int res = 1;
	for (int i = 0; i < num; i++)
	{
		res = res * 10;
	}
	return res;
}
int main()
{
	char numero_str[256];
	int numero_int = 0;
	int tam = 0, i = 0, j = 0;

	printf("Digite o numero: ");
	scanf("%s", numero_str);

	// descobre o tamanho da string
	while (numero_str[i] != '\0')
	{
		tam++;
		i++;
	}

	for (i = tam - 1; i >= 0; i--)
	{
		if ((int)numero_str[i] < 48 || (int)numero_str[i] > 57)
		{
			continue;
		}
		numero_int += ((int)numero_str[i] - 48) * potencia(j);
		j++;
	}
	printf("\nNumero inteiro: %d\n\n", numero_int);
}