#include <stdio.h>
#define ESTUDANTES 3
#define PROVAS 4

int minimo(matriz[][PROVAS], int linha, int coluna){
    int menor = 100000000;
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

int maximo(matriz[][PROVAS], int linha, int coluna){
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


int main(){
    
    
    return 0;

}