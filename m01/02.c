/*
Ingresar el día y la cotización del dólar durante un mes. Calcular y mostrar el día 
donde hubo la mayor cotización.
*/

#include <stdio.h>

int main()
{
    int cotiz, max_cotiz, max_dia, cont_mes;
    max_cotiz = 0;
    
    while (cont_mes < 3)
    {
        cont_mes++;
        printf("Ingrese cotización del día %d :", cont_mes);
        scanf("%d", &cotiz);
        
        if (cotiz > max_cotiz)
        {
            max_cotiz = cotiz;
            max_dia = cont_mes;
        }
        
    }
    
    
    printf("Día con mayor cotización: %d", max_dia);

    return 0;
}