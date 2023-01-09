// program que ordena os valores de um array em ordem crescente
#include <stdio.h>

int main(){
    int vetor[10] = {11, 23, 99, 2, 5, 18, 24, 45, 34, 88};

    int passada; // contador de passada
    int i; // contador de comparacao
    int segura; // local temporario usado para trocar elementos do array

    printf("ITENS DE DADOS NA ORDEM ORIGINAL\n");
    for(i = 0; i < 10; i++)
        printf("%3d", vetor[i]);

    printf("\n");

    // bubble sort
    // loop para controlar numero de passadas
    for(passada = 1; passada < 10; passada++){
        // loop para controlar numero de comparacoes por passada
        for(i = 0; i < 10 - 1; i++){
            // compara o proximo elemento e os troca se o primeiro
            // for maior que o segundo
            if(vetor[i] > vetor[i + 1]){
                segura = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = segura;
            }
        }
    }

    printf("ITENS DE DADOS NA ORDEM CRESCENTE\n");
    for(i = 0; i < 10; i++)
        printf("%3d", vetor[i]);

    printf("\n");
    return 0;
}