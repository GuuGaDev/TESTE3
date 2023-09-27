#include <stdio.h>

int main() {
    char nivel;
    float salario, aumento, salario_atualizado;

    printf("Digite o nivel de experiencia (a, b ou c): ");
    scanf(" %c", &nivel);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (nivel == 'a') {
        aumento = 0.05;
    } else if (nivel == 'b') {
        aumento = 0.07;
    } else if (nivel == 'c') {
        aumento = 0.08;
    }

    salario_atualizado = salario + (salario * aumento);

    printf("R$ %.2f\n", salario_atualizado);

    return 0;
}

