#include <stdio.h>

//função que  se é par
//imprime numeros pares e recebe n como parametro
void imprimePares(int n) {
    for (int i = 0; i <= n; i++)
    {
        //verifica se é par
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        
    }
    
}

int main(){

    int num;

    printf("Digite o numero para fazer impressao: ");
    scanf("%d", &num);

    //verifica se numero é possitivo
    if (num >= 0)
    {
        //chamada da fução
        imprimePares(num);
    }

    else
    {
        printf("O numero deve ser positivo\n");
    }
    
    
    return 0;
}