#include <stdio.h>

int main(){
    // Variaveis
    float num1, num2, operacao;

    // Passo 1: Exibir menu de operações.
    // Passo 2: Usuário escolhe uma operação.
    printf("Escolha uma operação aritmética: \nAdição: digite 1 \nSubtração: digite 2 \nMultiplicação: digite 3 \nDivisão: digite 4 \n");
    scanf("%f", &operacao);

    // Passo 3: O sistema solicita dois números de entrada
    printf("Insira o primeiro valor: ");
    scanf("%f", &num1);
    printf("Insira o segundo valor: ");
    scanf("%f", &num2);

    // Passo 4: O sistema executa a operação escolhida.
    if (operacao == 1){
        operacao = num1 + num2;
    } else if (operacao == 2){
        operacao = num1 - num2;
    } else if (operacao == 3){
        operacao = num1 * num2;
    } else if (operacao == 4){  
        operacao = num1 / num2;
    } else {
        printf("Operação inválida");
    }

    // Passo 5: O sistema exibe o resultado.
    printf("O resultado da operação é: %f", operacao);
}