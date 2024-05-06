#include <stdio.h>

int main() {
    int numeros;
    int i;
    int mayor, menor, suma;
    printf("Ingresa 10 numeros positivos:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero :%d ", i );
        scanf("%d", &numeros);
        while (numeros <= 0) {
            printf("Ingresa un numero positivo: ");
            scanf("%d", &numeros);
        }
        if (i == 0) {
            mayor = menor = numeros;
            suma = numeros;
        } else {
            if (numeros > mayor) {
                mayor = numeros;
            }
            if (numeros < menor) {
                menor = numeros;
            }
            suma = suma + numeros;
        }
    }
    printf("El mayor numero es: %d\n", mayor);
    printf("El menor numero es: %d\n", menor);
    printf("La suma de todos los numeros es: %d\n", suma);

    return 0;
}