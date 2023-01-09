//cubo de uma variavel usando passagem por valor
#include <stdio.h>

int cubo(int n){
    return n * n *n;
}

int main(){
    int number = 5;

    printf("Valor original = %d\n", number);

    number = cubo(number);
    printf("Novo Valor original = %d\n", number);
}