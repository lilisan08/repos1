#include <stdio.h>//vercion 2 examen practico 13/05/2024
#include <string.h>
int main() 
{
  char n[15], contra[15];
  int intentos =3;
    do{
   printf("ingresa tu nombre de usuario:");
    scanf("%s", &n);
    printf("ingresa la contrasena");
    scanf("%s", &contra);
   if (strcmp(n, "lilian") == 0 && strcmp(contra, "2bm38") == 0){
    printf("Bienvenido al sisitema:%s\n",n);
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
  }while(intentos>0);
 return 0;
}