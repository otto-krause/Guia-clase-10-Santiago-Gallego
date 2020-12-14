#include <stdio.h>
#include <stdlib.h>
int main(int a, char *b[]) //Función sin argumentos.
{
	int m,d,aa,c;	
	printf("ingrese un a�o ");
	scanf("%d",&a);
	while (a>0)
	{
		printf("ingrese un mes ");
		scanf("%d",&m);
		while((m<=12)&&(m>=1))
		{
				printf("ingrese un dia ");
				scanf("%d",&d);
				if (m==2){
				while((28>=d)&&(d>=1))
				{
					printf("fecha valida ");
					scanf(" ",&c);
				}						
						} 
						else
						{
				while((31>=d)&&(d>=1))
				{
					printf("fecha valida ");
					scanf(" ",&c);
				}
			}
					printf("dia Invalido");
				}
		printf("mes invalido");
	}
	return 0;
}
