#include <stdio.h>//vercion 3 y 4 examen practico 13/05/2024 (me confundi y no suvi la version 3)
#include <string.h>
#include <string.h>
int main() {
  char n[15], contra[15];
  int intentos =3, preci;
  float total = 0, cantidad;
   float precioUnitario;

    do{
   printf("ingresa tu nombre de usuario:");
    scanf("%s", &n);
    printf("ingresa la contrasena");
    scanf("%s", &contra);
   if (strcmp(n, "lilian") == 0 && strcmp(contra, "2bm38") == 0){
    printf("Bienvenido al sisitema:%s\n",n);
      break;
        } else {
            intentos--;
            if (intentos > 0) {
                printf("Nombre de usuario o contrasea incorrectos. Te quedan %d intentos.\n", intentos);
        }

   } while (cantidad != 0);
    printf ("para terminar introduce la cantidad de 0 \n\n");
      printf("Muy bien, Ingresa la cantidad de tus articulos vendidos  ");
        scanf  ("%d", &cantidad);
        printf ("de que precio fueron? ");
        scanf ("%d", &preci);
        if (preci < 0||cantidad < 0 ){
            printf ("lo siento, tus cantidades son negativas, Ingresa otra cantidad .\n\n");
           } else {
                float preci=precioUnitario*cantidad;
                total += preci;
            }
       printf ("tu total de los productos es de %d pesos ", total); 
   }
   while(cantidad<0);
    return 0;
}