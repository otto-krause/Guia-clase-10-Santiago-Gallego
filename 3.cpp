#include <stdio.h>
#include <stdlib.h>
int main(int a, char *b[]) {
	int c,d,e,f;
	d=0;
	e=0;
	float g,h,i,j,k,l,m,n,o,p,q;
	k=1;
	l=1;
	m=0;
	for (a=1;a<51;a++){
		printf("\n inngrese la nota del tp ");
		scanf("%f",&n);
		printf("\n ingrese una nota ");
		scanf("%f",&k);
			while(k>=0){
			l=l+1;
			j=k+j;
			printf("\n ingrese una nota ");
			scanf("%f",&k);			
			}	
			if (n>=6){
				d=d+1;
			}
	m=n+j;
	g=m/l;	
	h=h+g;
			if (g>o){
				o=g;
				f=c;
			}	
			if (l<=2){
			e=e+1;	
			}
	printf("\n el promedio del alumno %d es  %f ",c,g);
	l=1;
	j=0;}		
	i=h/50;
	printf("\n la cantidad de alumnos que aprobaron el tp es de %d alumnos",d);
	printf("\n el promedio general del curso es de %f ",i);
	printf("\n el mejor promedio fue el alumno %d con un promedio de  %f ",f,o);
	printf("\n la cantidad de alumnos con 2 o menos notas ingresadas es : %d",e);
}
