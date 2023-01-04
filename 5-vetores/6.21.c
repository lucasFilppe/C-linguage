#include <stdio.h>

//void reservasPassagensAerea(){
    
int main(){
     
        int classe;
     
        printf("favor digitar 1 para primeira classe: ");
        printf("favor digitar 2 para classe economica: ");
        scanf("%d", &classe);

        int assentosAviao[10] = {0};

        for(int i = 0; i < 10; i++){
            if(classe == 1){
                assentosAviao[i] = 1;
            }
        }
        printf("\n");

    } ;
    return 0;
}