#include <stdio.h>
#include <stdlib.h>
int main(int a, char *b[]) {
int c;
float d;
printf("ingrese un numero a dividir ");
scanf("%f",&d);
printf("ingrese el divisor ");
scanf("%d",&c);
while (c<d){
d=d-c;
}
if (d==c){
d=d-c;
}
printf("el resto es %f",d);
}
