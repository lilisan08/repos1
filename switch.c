#include <stdio.h>
int main ()
{
	char l;
	printf("ingresa una letra");
	scanf ("%c", &l);
	switch(l)
	{
	 case 'a':case 'A':
	 case 'e':case 'B':
	 case 'i':case 'I':
	 case 'o':case 'O':
	 case 'u':case 'U':
	 	printf("es una vocal: %c\n",l);
	 	break;
	 default:
	 	printf("no es un vocal: %c\n",l);
	}
}