#include <stdio.h>//vercion 3 y 4 examen practico 13/05/2024 (me confundi y no suvi la version 3)
#include <string.h>
int main() {
  char n[20];
    char contra[20];
    int precioUnitario, cantidad;
    int intentos = 3;
    int total,preci;

    do {
        printf("Introduce tu nombre: ");
        scanf("%s", &n);

        printf("Introduce tu contraseña: ");
        scanf("%s", &contra);

        if (strcmp(n, "lilian") == 0 && strcmp(contra, "2b38") == 0) {
            printf("Bienvenido al sistema.\n"); 
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                printf("Nombre de usuario o contrasea incorrectos. Te quedan %d intentos.\n", intentos);
            } else {
                printf("Se ha superado el número de intentos permitido.\n");
                break;
            }
        }
    } while (cantidad != 0);
    printf ("para terminar introduce la cantidad de 0 \n\n");
      printf("Ingresa la cantidad de los articulos");
        scanf  ("%d", &cantidad);
        printf ("ingresa el precio unitario del permitido:");
        scanf ("%d", &precioUnitario);
        if (cantidad < 0||preci < 0 ){
            printf ("lo siento, tus cantidades son negativas, Ingresa otra cantidad .\n\n");
           } else {
                float preci=cantidad*precioUnitario;
                total +=preci;
            }
       printf ("tu total de los productos es de %d pesos ", total); 

    return 0;
}
