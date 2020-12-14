#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(void) 
{
int a,b,c,d,e,f;//Variables sin inicializar
 d=0;
e=0;
f=0;
float g,h,i,j;//Variables sin inicializar
g=0;
h=0;
char k;
printf("ingrese su dni ");
scanf("%d",&b);
for(a=b;a>0;a++){
h=h+1;
printf("\n ingrese su sexo M/H ");
scanf("%s",&k);
printf("\n ingrese su a�o de nacimiento ");
scanf("%d",&c);
i=2020-c;
if(k=='M'){
e=e+1;
}
if(k=='H'){
d=d+1;
}	
if(b<=30000000){
f=f+1;
}
if(i<=17){
g=g+1;	
}		
printf("\n ngrese su dni ");
scanf("%d",&b);
a=b;	
}
j=(g*100)/h;
printf(" la cantidad de hombres es %d ",d);
printf("\n la cantidad de mujeres es %d ",e);
printf("\n las personas con dni menor a 30 millones son %d ",f);
printf("\n el porcentaje de menores de edad es %f ",j);
}
