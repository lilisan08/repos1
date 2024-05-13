#include <stdio.h> //vercion 5 examen practico 13/05/2024
#include <string.h>
int calcularTotal(int cantidad, int precioUnitario) {
    int total = 0;
    if (cantidad >= 0 && precioUnitario >= 0) {
        total = cantidad * precioUnitario;
    }
    return total;
}
int main() {
    char n[20];
    char contra[20];
    int precioUnitario, cantidad;
    int intentos = 3;
    int total = 0;
    do {
        printf("Introduce tu nombre de usuario: ");
        scanf("%s", n);
        printf("Introduce tu contraseña:");
        scanf("%s", contra);
        if (strcmp(n, "lilian") == 0 && strcmp(contra, "2b38") == 0) {
            printf("Bienvenido al sistema.\n");
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                printf("Nombre de usuario o contrasea incorrectos. Te quedan %d intentos.\n", intentos);
            } else {
                printf("Se ha superado el número de intentos permitido.\n");
                return 1;
            }
        }
    } while (intentos > 0);

    printf("Para terminar, introduce la cantidad de 0.\n\n");
    while (1) {
        printf("Ingresa la cantidad de los artículos: ");
        scanf("%d", &cantidad);
        if (cantidad == 0) {
            break;
        }
        printf("Ingresa el precio unitario del artículo: ");
        scanf("%d", &precioUnitario);
        if (cantidad < 0 || precioUnitario < 0) {
            printf("Lo siento, las cantidades no pueden ser negativas. Ingresa otra cantidad.\n\n");
        } else {
            total += calcularTotal(cantidad, precioUnitario);
        }
    }
    printf("El total de los productos es de %d pesos.\n", total);
    return 0;
}
