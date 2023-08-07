#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    UINT CPAGE_UTF8 = 65001;

    SetConsoleOutputCP(CPAGE_UTF8);

    printf("Digite o primeiro número\n");

    double numero1;
    double numero2;
    int variavel;

    scanf("%lf", &numero1);
    printf("Digite o segundo número: \n");
    scanf("%lf", &numero2);

    printf("Digite 1 para somar \n Digite 2 para subtrair \n Digite 3 para Multiplicar \n Digite 4 para dividir \n");
    scanf("%d", &variavel);

    double resultado;  

    if (variavel == 1) {
        resultado = numero1 + numero2;
        printf("O resultado da soma dos números %lf e %lf é: %lf", numero1, numero2, resultado);

    } else if (variavel == 2) {
        resultado = numero1 - numero2;
        printf("O resultado da soma dos números %lf e %lf é: %lf", numero1, numero2, resultado);

    } else if (variavel == 3) {
        resultado = numero1 * numero2;
        printf("O resultado da multiplicação dos números %lf e %lf é: %lf", numero1, numero2, resultado);

    } else if (variavel == 4) {
        resultado = (numero1 / numero2);
        printf("O resultado da divisão dos números %lf e %lf é: %lf", numero1, numero2, resultado);
    } else {
        printf("Você não digitou nenhuma das opções");
    }

    return 0;
}
