#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int cont;
    printf("\n--------------Contagem regressica---------------");
    for (cont = 10; cont >= 0; cont--)
    {
        printf("\n%d\n", cont);
    }
system("pause");    
    

}    