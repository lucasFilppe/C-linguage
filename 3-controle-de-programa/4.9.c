#include <stdio.h>

int main(){
    int count;

    printf("Digite a quantidade de numeros a serem somados: ");
    scanf("%d", &count);

    printf("Digite os numeros: ");
    int num, soma = 0;

    for (int i = 1; i <= count; i++)
    {
        scanf("%d ", &num);
        soma = soma + num;
    }
    
    printf("\n");
    printf("A soma eh: %d\n", soma);
    return 0;
}