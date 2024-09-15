/******************************************************************************
Leer un texto carácter a carácter terminado en PUNTO. Contar cuantas palabras 
empiezan y terminan con la misma letra.
*******************************************************************************/
#include <stdio.h>

//totet
int main()
{
    int c, aux, f_let, count=0;
    c = getchar(); 
    while(c==' '){
        c=getchar();
    }
    f_let = c; 
    c=getchar();
    while(c != '.'){
        aux=c; 
        c=getchar();
        if(c == ' ' || c == '.'){
            if(aux == f_let){
                count++;
            }
            if(c != '.'){
                c=getchar(); 
                f_let=c; 
                c=getchar(); 
            }
        }
    }
    printf("\nPalabras que empiezan y terminan con la misma letra: %d \n", count);
    return 0;
}