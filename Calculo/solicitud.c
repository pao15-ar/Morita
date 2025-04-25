#include <stdio.h>
#include "suma.h"
#include "resta.h"

int main(){
    int valor1;
    int valor2;
    int total;
    int total2;

    printf("Dame un numero ");
    scanf("%d", &valor1);

    printf("Dame un segundo numero ");
    scanf("%d", &valor2);
    
    valor(valor1);
    valoor(valor2);
    parametro(valor1);
    parame(valor2);

    total = valor1 + valor2;
    total2 = valor1 - valor2;

    printf("Es resultado de la suma es: %d \n", total);
    printf("El resultado de la resta es: %d \n", total2);
}

