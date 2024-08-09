/*
Se ingresan la cantidad de autos vendidos en los últimos 9 años. Calcular y mostrar:
a) El año que se vendieron la mayor cantidad de autos.
b) La cantidad total de autos vendidos
*/

#include <stdio.h>

int main()
{
    int total, max_year, max_sold, years, qty;
    years = 0;
    
    while (years < 9)
    {
        years++;
        printf("Ingrese cantidad de autos vendidos en el año %d:", years);
        scanf("%d", &qty);
        total += qty;
        
        if (qty > max_sold)
        {
            max_sold = qty;
            max_year = years;
        }
        
    }
    
    
    printf("El año que se vendieron la mayor cantidad de autos: %d \n", max_year);
    printf("La cantidad total de autos vendidos es %d", total);

    return 0;
}