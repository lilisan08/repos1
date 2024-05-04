#include <stdio.h>

int main() {
    int num, sum = 0, cont = 0;
    
    do {
        printf("Introduce un número 0:para finalizar:");
        scanf("%d", &num);
        
        if(num != 0) {
            printf("Has introducido el número %d", num);
            sum += num;
            cont++;
        }
    } while(num = 0);
    
    printf("Se ha introducido el número 0.\n");
    printf("La cantidad de números es de: %d\n", cont);
    printf("La suma de los números: %d\n", sum);
    
    return 0;
}