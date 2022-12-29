//representação de hostograma
#include <stdio.h>

int main(){
    int i, j;
    int vetor[10] = {1, 5, 7, 12, 9, 8, 6, 17, 15, 8};

    printf("%s%13s%17s", "Elemento", "Valor", "Histograma");

    for(i = 0; i < 10; i++){
        printf("%7d%13d", i, vetor[i]);
        for(j = 1; j <= vetor[i]; j++){
            printf("  %c", '*');
        }
        printf("\n");
    }
    return 0;
}