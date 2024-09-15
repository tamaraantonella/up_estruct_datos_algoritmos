/******************************************************************************

Leer un texto carácter a carácter, terminado en PUNTO. Mostrar cuántas palabras 
tienen más de 2 letras y terminan con “s”
*******************************************************************************/
#include <stdio.h>


int main()
{
    int let_count = 0, word_count=0, s_count=0, c, aux;
    printf("Ingrese una frase y termine con un punto \n");
    c = getchar();
    while(c != '.'){
        let_count++;
        aux=c;
        c=getchar();
        if(c == ' ' || c=='.'){
            if(let_count>2){
                word_count++;
                let_count=0;
            }
            if(aux == 's'){
                s_count++;
            }
        }
    }
    printf("Cantidad de palabras con más de 2 letras: \t %d\n",word_count);
    printf("Cantidad de palabras que terminan con s \t %d", s_count);
    return 0;
}