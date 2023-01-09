#include <stdio.h>

int main(){
    int a;
    int *aPtr; // é um ponteiro para inteiro

    a = 7;
    aPtr = &a;//aptr definido para endereço de a

    printf("O endereço de a eh %p\n", &a);
    printf("O valor de aPtr eh %p\n", aPtr);

    printf("O valor de a eh %d\n", a);
    printf("O valor de *aPtr eh %d\n", *aPtr);
    
}