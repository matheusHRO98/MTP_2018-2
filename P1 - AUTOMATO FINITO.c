//NOME : matheus henrique rodrigues de oliveira
// MATRICULA : 11811EBI022
#include <stdio.h>

int main()
{
    int estado = 0, i = 0;
    char bin[256];
    printf("\nInsira um numero em binario desejado:");
    scanf("%s", bin);

	while(bin[i] != '\0')
    {
        if(bin[i] == '0')
        {
            if(estado == 0);
            else if(estado == 1) estado = 2;
            else if(estado == 2) estado = 1;
            i++;
        }
        else if(bin[i] == '1')
        {
            if(estado == 0) estado = 1;
            else if(estado == 1) estado = 0;
            else if(estado == 2);
            i++;
        }
        else
        {
            printf("\nNumero inserido nao eh um numero binario");
            return 0;
        }
    }

    if(estado == 0) printf("\n O numero %s e multiplo de 3", bin);
    else printf("\n O numero binario %s nao e multiplo de 3", bin);
    return 0;
}
