#include <stdio.h>
int main(){
    float numero1, numero2, resultado;
    char operador;

    do{
    scanf("%f %c %f", &numero1, &operador, &numero2);
    } while(operador != '+' && operador != '-' && operador != '*');

    switch(operador){
        case '+': resultado = numero1 + numero2;
            break;
        case '-': resultado = numero1 - numero2;
            break;
        case '*': resultado = numero1 * numero2;
            break;
        case '/': resultado = numero1 / numero2;
    }

    printf("Resultado: %.2f %c %.2f = %.2f /n",numero1, operador, numero2, resultado);

    return 0;
}