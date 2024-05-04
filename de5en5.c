#include <stdio.h>

int main() {
    int num,i;
    printf("ingresa el numero de terminos que desea mostrar:");
    scanf("%d", &num);
    printf("los numeros son:");
    for(i=1;i<=num;i++){
        printf("%i\n", i*5);
        
    }
    return 0;
}