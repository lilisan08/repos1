#include <stdio.h>

int main() {
    int num, sum = 0, cont = 0;
    
    do {
        printf("Introduce un numero 0:para finalizar:");
        scanf("%d", &num);
        
        if(num != 0) {
            printf("Has introducido el numero: %d\n", num);
            sum += num;
            cont++;
        }
    } while(num != 0);
    
    printf("Se ha introducido el numero 0\n");
    printf("La cantidad de numeros es de: %d\n", cont);
    printf("La suma de los numeros es: %d\n", sum);
    
    return 0;
}