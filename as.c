#include <stdio.h>
int main ()
{
	int num;
	printf("ingresa el numero de tu carta:");
	scanf("%d", &num);
	
	if(num==1){
 total=sal*hr;
 printf("tu carta es as:");
 }
 else if(num==10){
 printf ("tu carta es sota");
}
 else if(num==11){
 printf("tu carta es caballo");
 }
 else if(num==12){
 printf("tu carta es rey");
 }
 else if(num==11){
 printf("tu carta es caballo");
 }
 else if(num==2|3|4|5|6|7|8|9){
 printf("tu carta no es figura, ni tampoco as");
 }
 else if(num>12){
 printf("este numero no esta en la baraja española");
 }

 return 0;
}