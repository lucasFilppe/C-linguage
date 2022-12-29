// rola dados
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int face;
    int jogada;
    int frequencia[10] = {0};
    for(int i = 0; i < 10; i++){
        printf("%d ", frequencia[i]);
    }
    printf("\n");

    srand(time(NULL));

    printf("%s%17s\n","face", "frequencia");
    printf("--------------------------------------------\n");
    for(jogada = 1; jogada <= 10; jogada++){
        face = 1 + rand() % 6;
        frequencia[face]++;
        
        // printf("%d%17d%17d\n", jogada, face, frequencia[face]);
    }

    for(face = 1; face <= 6; face++)
        printf("%d%10d\n", face, frequencia[face]);
    return 0;
}