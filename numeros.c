#include <stdio.h>
int main ()
{ 
	int num[5];
	int i, menor;
  printf("ingrese 5 numeros:\n" );
  for (i = 0; i < 5; i++){
	printf("nuero %d:", i+1);
	scanf("%d", &num[i]);	
}
menor=num[0];
for(i=1; i<5; i++)
{
	if(num[i]<menor){
		menor =num[i];
	}
}
printf("el menor de los numeros es:%d\n", menor);
return 0;
}