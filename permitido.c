#include <stdio.h>
int main ()
{ 
	int n1,n2,n3;
	printf("ingresa 3 numeros");
	scanf ("%d %d %d", &n1, &n2, &n3);
	if(n1==1&&n2==2&&n3==3){
		printf("tu acceso es permitido\n");
}else{
	printf ("tu acceso no es permitido\n");
}

return 0;
}