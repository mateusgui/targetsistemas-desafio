#include <stdio.h>

int main()
{
    int indice = 13;
    int soma = 0;
    int k = 0;
    
    while(k < indice){
        k+=1;
        soma+=k;
    }
    
    printf("%d",soma);

    return 0;
}
