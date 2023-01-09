//cubo de uma variavel usando passagem por referencia
#include <stdio.h>

void cubo(int *n){
    *n =  *n * *n * *n;
}

int main(){
    int number = 5;

    printf("Valor original = %d\n", number);

    cubo(&number);//passa endereço do numero a cubo
    printf("Novo Valor original = %d\n", number);
}