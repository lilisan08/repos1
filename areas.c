#include <stdio.h>
int main ()
{
	int a, b,l, al,bm, f;

	printf("¿de que figura quiere sacar el area");
	printf("1.- Calcular el area de un triangulo 2.- Calcular el area de un trapecio  3.- Calcular el area de un rectangulo");
	scanf ("%d", &f);
	if (f==1){
      printf("ingresa la base de tu triangulo");
	  scanf("%d",&b);
	  printf("ingresa la altura del triangulo");
	  scanf ("%d", &al);
	  a=(b*al)/2;
	  printf ("el area de tu triangulo es de: %d\n", a);
	}
	
	else if(f==2){
	  printf("ingresa la base mayor de tu trapecio");
	  scanf("%d",&bm);
	  printf("ingresa la base menor del trapecio");
	  scanf ("%d", &b);
	  printf ("ingresa la altura de tu trapecio");
	  scanf ("%d", &al);
	  a=((bm*b)*al)/2;
	  printf ("el area de tu trapecio es de: %d\n", a);
	}
	
     else if(f==3){
	  printf("ingresa la base de tu rectangulo");
	  scanf("%d",&b);
	  printf("ingresa la altura del rectangulo");
	  scanf ("%d", &al);
	  a=b*al;
	  printf ("el area de tu rectangulo es de: %d\n", a);
	}
 return 0;
}