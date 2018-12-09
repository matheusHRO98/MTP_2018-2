//matheus henrique rodrigues de oliveira
// 11811EBI022
#include <stdio.h>
int sm(int len, int *v)

{

   if(len>0)

        return *v+sm(len-1, v+1);

    else

        return 0.0;

}

float med(int x, int y)

{

    return (float)x/(float)y;

}

int main ()

{

	int vet[]={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

	int tam=0, i=0;

	printf("Quantidade a ser somada:\n");

	scanf("%d", &tam);

	printf("\nValores: \n");

	for (i=0; i<tam; i++)
 
		scanf("%d", &vet[i]);

	printf("\nmedia = %f", med(sm(tam, vet), tam));

	return 0;

}
