#include <stdio.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b,c;
a=0;
b=0;
c=0;
printf("ingrese un numero entre el 1 y el 10 ");
scanf("%d",&b);
if (b>10){
printf("error");
} else if (b <= 0){
printf("error");
} else{
for (a=1;a<=12;a++){
c=b*a;
printf("\n %d x %d = %d",a,b,c);
}
}
}
