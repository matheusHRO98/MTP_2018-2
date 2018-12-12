//matheus henrique rodrigues de oliveira
// 11811EBI022

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

int main() {
    unsigned int N;
    ponto *p;
    printf("Quantos pontos?: ");
    scanf("%u", &N); 
	getchar();
    p = gera_pontos(N);
    mostra_pontos(p, p+N);
    free(p);
    return 0;
}
