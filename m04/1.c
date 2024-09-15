/******************************************************************************

Leer un texto carácter a carácter, terminado en PUNTO. Mostrar cuántas palabras
tienen más de 3 letras

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int let_count = 0, word_count=0;
    int c;
    printf("Ingrese una frase y termine con un punto \n");
    c = getchar();
    while(c != '.'){
        if(c == ' '){
            if(let_count > 3){
                word_count ++;
            }
            let_count=0;
        } else {
            let_count++;
        }
        c=getchar();
    }
    printf("Cantidad de palabras con más de 3 letras: \t %d",word_count);
    return 0;
}
