// Cargar un vector con n elementos enteros y calcular la suma de sus elementos en forma recursiva
#include <stdio.h>

void cargar(int mat[25][25], int dim, int row, int col){
    if(col>dim){
        col=0;
        row++;
    }
    
    if(row>dim){
        return;
    }
  
    printf("\nIngrese el nro a cargar en la fila %d, columna %d: ", row, col);
    scanf("%d", &mat[row][col]);
    cargar(mat, dim, row, col+1);
    return;
    
}

void mostrar(int mat[25][25], int dim, int row, int col){
    if(col>dim){
        col=0;
        row++;
        printf("\n");
    }
    if(row>dim){
        return;
    }
  
    printf("%d \t", mat[row][col]);
    return mostrar(mat, dim, row, col+1);
}

int tot(int mat[25][25], int dim, int row, int col){
    if(col>dim){
        col=0;
        row++;
    }
    if(row>dim){
        return 0;
    }
    return tot(mat, dim, row, col+1) + mat[row][col];
}
int main() {
    int mat[25][25], dim, total;
    printf("Ingrese la dimension de la matriz: ");
    scanf("%d", &dim);
    cargar(mat, dim-1, 0, 0);
    mostrar(mat, dim-1, 0, 0);
    total = tot(mat, dim-1, 0, 0);
    printf("la suma de todos los elementos de la matriz es: %d", total);
    return 0;
}



