//matheus henrique rodrigues de oliveira
//11811EBI022
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
}ponto;

ponto * gera_pontos(int N) {
    ponto * p = (ponto *) calloc(N,sizeof(ponto));
    int i;
    for(i = 0; i < N; i++){
        p[i].x = cos(i*2.0*M_PI/(N-1));
		p[i].y = sin(i*2.0*M_PI/(N-1));
    }
    return p;
}

void mostra_pontos(ponto * p_ini, ponto * p_fim) {
    if(p_ini < p_fim) {
        printf("(%.3f, %.3f)\n", p_ini->x, p_ini->y);
        mostra_pontos(p_ini+1, p_fim);
    }
}

void grava_pontos(ponto * p_ini, int n){
  FILE * arquivo;
  arquivo = fopen("pontos.dat", "wb");
  fwrite(p_ini, n, sizeof(ponto), arquivo);
  fclose(arquivo);
  printf("Arquivo gravado");
}

ponto * le_arquivo(char *nome_arquivo, unsigned int * pn){
  ponto * p = (ponto *) malloc(sizeof(p));
  unsigned int n = 0;
  FILE * arquivo;
  arquivo = fopen(nome_arquivo, "rb");
  if(arquivo != NULL){
    while(1){
      fread(p, 1, sizeof(ponto), arquivo);
      if(feof(arquivo)) break;
      n++;
    }
    rewind(arquivo);
    p  = (ponto *) realloc(p, n*sizeof(ponto));
    fread(p, n, sizeof(ponto), arquivo);
    *pn = n;
    return p;
  }
  printf("Digite o numero de vezes em que o ciclo vai ser dividido.");
  return 0;
}


int main() {
    unsigned int N;
    int op=0;
    ponto *p;
    printf("Este programa mostra pontos de uma circunferencia aleatoriamente.");
	do{printf("\nEscolha a operacao a ser realizada:\n[1]Gerar arquivo com pontos \n[2]Recuperar pontos de arquivo.\n[3]Sair\n");
	scanf("%d",&op);
	switch(op){
		case 1:
		 { printf("Quantos pontos?: ");
		 	scanf("%u", &N);
		 	getchar();
            p = gera_pontos(N);
            grava_pontos(p, N);;
		 	break;
            }

		case 2:
		{ p= le_arquivo("pontos.dat", &N);
			mostra_pontos(p, p+N);
			break;
			}

		break;

		default:
 	    {
 		if(op!=3)
 		printf("Operacao invalida!\n");
 		break;
    }
  }
}while(op!=3);
    free(p);
    return 0;
}
