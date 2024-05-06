#include <stdio.h>

int main() {
    double num, total = 1;
    int potencia;
    printf("Ingrese un numero: ");
    scanf("%lf", &num);
    printf("Ingrese la potencia a la que lo quiere elevar: ");
    scanf("%d", &potencia);
    for (int i = 0; i < potencia; i++) {
        total *= num;
    }
    printf("%.2f elevado a la potencia %d es igual a %.2f\n", num, potencia, total);

    return 0;
}