#include <stdio.h>
#include <stdlib.h>
int main(int a, char *b[]) {
int c,d,e,f,g;
d=0;
e=0;
f=0;
g=0;
printf("Ingrese un numero a multiplicar ");
scanf("%d",&d);
printf("Ingrese otro numero a multiplicar ");
scanf("%d",&e);
for (c=1;c<=e;c++){
f=d;
g=g+f;
}
printf("El resultado es %d",g);
}
