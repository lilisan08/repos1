#include <stdio.h>
int main ()
{
	int hr, doble, sal,extra, total;
	printf("ingrese la cantidad de horas trabajadas:");
	scanf("%d", &hr);
	printf("ingrese la cantidad de su sarario:");
	scanf("%d",&sal);
	if(hr<41){
 total=sal*hr;
 printf("El pago total es de: %d\n",total);
 }
 else if(hr<50){
 extra=sal/2;
 total=(sal+extra)*hr;
 printf ("El pago total es de: %d\n",total);
}
 else if(hr>50){
 doble=sal*2;
 total=doble*hr;
 printf("El pago total es de: %d\n",total);
 }
 return 0;
}