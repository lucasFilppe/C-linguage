//calculadora de limite de credito

#include <stdio.h>

int main(){

    //entrada do usuario
    int numConta;
    float saldoInicial, totalEncargos, totalCredito, limiteCredito;

    do
    {
        printf("Informe numero da conta (-1 para sair): ");
        scanf("%d", &numConta);
        printf("Informe saldo inicial: ");
        scanf("%f", &saldoInicial);
        printf("Informe o total de encargos: ");
        scanf("%f", &totalEncargos);
        printf("Informe total de creditos: ");
        scanf("%f", &totalCredito);
        printf("Informe lime de credito: ");
        scanf("%f", &limiteCredito);

        //calcula novo saldo
        float novoSaldo = (saldoInicial + totalEncargos - totalCredito);

        //exibe limite de credito ultrapassado
        if (novoSaldo > limiteCredito)
        {
            printf("Conta: %d\n", numConta);
            printf("limite de credito: %.2f\n", limiteCredito);
            printf("Saldo: %.2f\n", novoSaldo);
            printf("Limite de credito ultrapassado\n");
        }

        printf("\n");
         
    } while (numConta != -1);
    
    return 0;
}