//Programa que calcula IMC

#include <stdio.h>

int main(){

    float peso, altura;

    //Ler peso e altura do usuário
    printf("Digite seu peso(kg): ");
    scanf("%f", &peso);
    printf("Digite sua alutura: ");
    scanf("%f", &altura);

    //calular iMC
    float imc = (peso / (altura * altura));
    printf("Imc = %f\n\n", imc);

    //verificar valor digitado para avaliar IMC
    if(imc < 18.5)
        printf("Abaixo do peso\n");

    else if(imc >= 18.5 && imc <= 24.9)
        printf("Nomal\n");

    else if(imc >= 25 && imc <= 29.9)
        printf("Acima do peso\n");

     else
        printf("Obeso\n");
    

    return 0;
}
