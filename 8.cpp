#include <stdio.h>
#include <stdlib.h>
int main(int a, char *b[]) {
	int c,d;
	c=1;
	float e;
	printf("ingrese un numero para dividir ");
	scanf("%f",&e);
	printf("ingrese el divisor ");
	scanf("%d",&d);
	while (d<e){
	e=e-d;
	c=c+1;
	}
	printf("El resultado es %d",c);
}
