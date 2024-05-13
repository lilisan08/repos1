#include <stdio.h>
#include <string.h>
int main() {
	char n[15], contra[15];
	int intentos =3;
    do{
	printf("ingresa tu nombre:");
    scanf("%s", &n);
    printf("ingresa la contraseña");
    scanf("%s", &contra);
   if (strcmp(n, "root") == 0 && strcmp(contra, "1234") == 0){
    printf("Bienvenido:%s\n",n);
      break;
     }else{
        intentos--;
       if (intentos>0){
       printf("alguno de los datos es incorrecto; quedan %d intentos.n", intentos); 
     }else {
      printf("Se han acabado los intentos permitidos.\n");
      break;
     }
    }
  } while (intentos>0);
 return 0;
}