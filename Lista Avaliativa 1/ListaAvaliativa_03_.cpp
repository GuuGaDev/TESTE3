#include <stdio.h>

int main() {
    int senha_cadastrada, senha_inserida;

    printf("Digite a senha cadastrada (4 digitos): ");
    scanf("%d", &senha_cadastrada);

    while (1) {
        printf("Digite a senha para validacao: ");
        scanf("%d", &senha_inserida);

        if (senha_inserida == senha_cadastrada) {
            printf("Senha cadastrada: %d\nSenha valida!\n", senha_cadastrada);
            break;
        } else {
            printf("Senha invalida!\n");
        }
    }

    return 0;
}

