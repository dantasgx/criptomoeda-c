#include <stdio.h>
#include <string.h>

void login(){
    char cpf[12];
    char senha[7];

    FILE *arquivo = fopen("investidor.txt", "r");

    if (arquivo == NULL){
        printf("Erro abrir o arquivo!\n");
        return;
    }

    char nome[100];
    fgets(nome, 100, arquivo);

    fgets(cpf, 12, arquivo);
    fgets(senha, 7, arquivo);

    fclose(arquivo);

}


int main(){
    login();
    // int opcao;

    // do{
    //     printf("Exchange de Criptomoedas\n");
    //     printf("Bem Vindo!\n");

    //     printf("O que voce deseja fazer?\n");
    //     printf("1. Consultar Saldo.\n");
    //     printf("2. Consultar Extrato.\n");
    //     printf("3. Depositar.\n");
    //     printf("4. Sacar.\n");
    //     printf("5. Comprar Criptomoedas.\n");
    //     printf("6. Vender Criptomoedas.\n");
    //     printf("7. Atualizar Cotacao.\n");
    //     printf("8. Sair.\n");

    //     printf("Digite um numero:\n");
    //     scanf("%d", &opcao);
    //     switch(opcao) {
    //         case 1:
    //             printf("Voce escolheu a opcao 1\n");
    //             break;
    //         case 2:
    //             printf("Voce escolheu a opcao 2\n");
    //             break;
    //         case 3:
    //             printf("Voce escolheu a opcao 3\n");
    //             break;
    //         case 4:
    //             printf("Voce escolheu a opcao 4\n");
    //             break;
    //         case 5:
    //             printf("Voce escolheu a opcao 5\n");
    //             break;
    //         case 6:
    //             printf("Voce escolheu a opcao 6\n");
    //             break;
    //         case 7:
    //             printf("Voce escolheu a opcao 7\n");
    //             break;
    //         case 8:
    //             printf("Saindo\n");
    //             break;
    //         default:
    //             printf("Opcao Invalida!!\n");
    //         }    
        
    // } while (opcao != 8); 

    return 0;
}