//Programa de pesquisa com estudantes

#include <stdio.h>

int main(){
    int i; //contador para pecorrer 10 respostas
    int avaliacao; //contador para pecorrer frequencias 1-10

    //inicializa contadores de frequencia em 0
    int frequencia[11] = {0};

    //coloca respostas da pesquisa no array
    int respostas[15];
    for(int j = 1; j <= 15; j++){
        printf("Resposta %d: ", j);
        scanf("%d", &respostas[j]);
    }
    printf("\n");

    //para cada resposta, seleciona valor do array de respostas
    //e usa esse valor como subscrito na frequencia do array
    //para determinar o elemento a ser incrementado
    for(i= 1; i <= 15; i++){
        ++frequencia[respostas[i]];
    }

    printf("%s%17s\n", "Avaliacao", "Frequencia");

    for(avaliacao = 1; avaliacao < 11; avaliacao++){
        printf("%d%17d\n", avaliacao, frequencia[avaliacao]);
    }


    return 0;
}