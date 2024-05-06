#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int mayor, menor, suma;
    printf("Ingresa 10 numeros positivos:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        while (numeros[i] <= 0) {
            printf("Ingresa un numero positivo: ");
            scanf("%d", &numeros[i]);
        }
        if (i == 0) {
            mayor = menor = numeros[i];
            suma = numeros[i];
        } else {
            if (numeros[i] > mayor) {
                mayor = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
            suma += numeros[i];
        }
    }
    printf("El mayor numero es: %d\n", mayor);
    printf("El menor numero es: %d\n", menor);
    printf("La suma de todos los numeros es: %d\n", suma);

    return 0;
}