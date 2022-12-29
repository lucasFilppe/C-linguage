#include <stdio.h>
#include <math.h>

//função que retorna a distancia de dois pontos
double distanciaDoisPontos(double x1, double x2, double y1, double y2){
    return sqrt((pow(x2 - x1, 2)) + (y2 - y1) );
}

int main()
{
    double x1, x2, y1, y2;
    printf("Digite as cordenadas do ponto A: ");
    scanf("%lf %lf", &x1, &x2);
    printf("Digite as cordenadas do ponto B: ");
    scanf("%lf %lf", &y1, &y2);
    
    printf("A distancia eh %.2lf\n", distanciaDoisPontos(x1, x2, y1, y2));

    return 0;
}