/*
Ingresar números hasta que dicho número sea negativo. Calcular y mostrar:
a) Cantidad de números mayores a 4 y menores a 25.
b) Promedio de aquellos números múltiplos de 6.
c) El menor número leído. 
*/

#include <stdio.h>

int main()
{
    int current = 0, cont_a = 0, cont_b = 0, acc_b = 0, min = 0;
    
    printf("ingrese un numero positivo: ");
    scanf("%d", &current);
    min = current;
    while(current > 0)
    {
        if (current > 4 && current < 25)
        {
            cont_a ++;
        }
        if (current % 6 == 0 && current != 0)  
        {
            cont_b++;
            acc_b += current;
        }
        
        if (current < min)
            min = current;
            
        printf("cont b %d \n", cont_b);
        printf("Acc b %d \n", acc_b);
        printf("ingrese un numero positivo: ");
        scanf("%d", &current);
    }

    
    printf("Cantidad de números mayores a 4 y menores a 25: %d \n", cont_a);
    if (cont_b > 0)
        printf("Promedio de aquellos números múltiplos de 6: %d \n",acc_b/cont_b);
    else
        printf("No hay numeros multiplos de 6");
    printf("El menor número leído: %d", min);
    return 0;
}