#include <stdio.h>
#define ESTUDANTES 3
#define PROVAS 4

int minimo(int matriz[][PROVAS], int linha, int coluna){
    int menor = 100000;
    for (int i = 0; i < linha ; i++)
    {
        for(int j = 0; j < coluna; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

int maximo(int matriz[][PROVAS], int linha, int coluna){
    int maior = 0;
    for (int i = 0; i < linha ; i++)
    {
        for(int j = 0; j < coluna; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

double media(double media[], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += media[i];
    }

    return (double)total \ n;
}


void lerMatriz(int matriz[][ESTUDANTES], int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("Diigte o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimeMatriz(int matriz[][ESTUDANTES], int l, int c){
   for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%3d ", matriz[i][j]);
        }
     printf("\n");
    }
}


int main(){
    int n, m;

    printf("Digite os valores de linhas e colunas: ");
    scanf("%d %d", &n, &m);

    int matriz[n][m];

    lerMatriz(matriz, n, m);
    imprimeMatriz(matriz, n, m);

    printf("O menor eh %d\n", minimo(matriz, n, m));
    printf("O maior eh %d\n", maximo(matriz, n, m));
   
    
    return 0;

}