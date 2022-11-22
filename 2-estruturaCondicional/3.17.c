//cmo de gasolina
#include <stdio.h>

int main(){
    
    float litros, km;
    float consumoGeral;

    //ler litros por abastecimento e km rododado
    printf("Informe quantos litris abasteceu: ");
    scanf("%f", &litros);
    printf("Informe quantos km dirigiu: ");
    scanf("%f", &km);

    int i = 0;
    //enquanto nao for digitado -1 executa loop
    while (litros != -1)
    {
        //calculaar km rodados por litros usado e exibir
        float kmLitro = km / litros;
        printf("O consumo atual é de %f km/l\n\n", kmLitro);

        //calcula consumo geral
        consumoGeral += km;

        //repetir comando de entrada
        printf("Informe quantos litros abasteceu: ");
        scanf("%f", &litros);
        printf("Informe quantos km dirigiu: ");
        scanf("%f", &km);
        i++;
    }
    
    //exibe cosumo geral
    printf("Cosumo geral foide : %f\n", consumoGeral / i);

    
    

    return 0;
}