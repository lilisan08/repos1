#include <stdio.h>

int encontrarMayor(int numeros[10], int longitud) {
    int mayor = numeros[10];
    for (int i = 1; i < longitud; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}
int encontrarMenor(int numeros[10], int longitud) {
    int menor = numeros[10];
    for (int i = 1; i < longitud; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}
int calcularSuma(int numeros[10], int longitud) {
    int suma = 0;
    for (int i = 0; i < longitud; i++) {
        suma += numeros[i];
    }
    return suma;
}
int main() {
    int numeros[10];

    printf("Ingresa 10 numeros positivos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        while (numeros[i] <= 0) {
            printf("Ingresa un numero positivo: ");
            scanf("%d", &numeros[i]);
        }
    }
    printf("El mayor numero es: %d\n", encontrarMayor(numeros, 10));
    printf("El menor numero es: %d\n", encontrarMenor(numeros, 10));
    printf("La suma de todos los numeros es: %d\n", calcularSuma(numeros, 10));
    return 0;
}