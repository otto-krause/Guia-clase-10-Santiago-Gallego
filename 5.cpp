#include <stdio.h>
#include <stdlib.h>
int main(int a, char *b[]) {
int c,d,e;
d=1;
e=1;
printf("ingrese un numero ");
scanf("%d",&e);
for (c=1;a<=e;c++){
d=d*c;
}
printf("el factorialdel numero es %d ",d);
}
