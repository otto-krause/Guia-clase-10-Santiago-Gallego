#include <stdio.h>
#include <stdlib.h>
int main(int a, char *b[]) {
	int c,d,e,f,g,h,i;
	printf("ingrese la factura ");
	scanf("%d",&c);	
	 while (c!=999){	
		printf("\n ingrese la cantidad ");
		scanf("%d",&d);
		printf("\n ingrese el precio unitario ");
		scanf("%d",&e);		
		printf("\n ingrese el numero de producto ");
		scanf("%d",&f);	
				i=d*e;
					if (i>h){
						h=i;
					}
				if (d>g) {
					g=f;
				}
	printf("\n //////////////////////////////////////////////////////////");
	printf("\n ingrese la factura ");
	scanf("%d",&c);	
	}
	printf("\n el mayor importe fue %d ",h);
	printf("\n el producto mas vendido fue %d ",g);

}
