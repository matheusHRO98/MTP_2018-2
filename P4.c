//NOME : matheus henrique rodrigues de oliveira
// MATRICULA : 11811EBI022

#include <stdio.h>

int A(int,int );
int main(){
	int m,n;
	printf("Insira valor para m e n , de espaco:\n");
	scanf("%d%d",&m,&n);
	printf("%d",A(m,n));		
	return 0;
	}
	
int A(int m,int n)
	{
		if(m== 0)
		return n+1;
		else if(n==0 && m>0)
		return A(m-1,1);
		else
        return A(m - 1, A(m, n - 1));
		}
		

