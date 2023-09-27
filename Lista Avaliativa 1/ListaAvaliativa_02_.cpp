/* Faça um programa que verifique se um número é ímpar ou par e calcule a soma dos seus dígitos.
Entrada
A entrada é um número inteiro positivo N (0 = N = 1000000000).
Saída
A saída deve conter duas linhas. Na primeira, uma mensagem indicando se o valor lido é ímpar ou par, e na
segunda, o resultado da soma dos algarismos do valor inserido.
Não se esqueça de imprimir as mensagens com uma quebra de linha ao final. */ 


#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    
    while (numero > 0) {
        digito = numero % 10;
        soma += digito; 
        numero /= 10; 
    }

    
    printf("A soma dos digitos do numero e %d.\n", soma);

    return 0;
}




