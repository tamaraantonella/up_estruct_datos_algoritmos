// Cargar una matriz de n filas y n columnas, calcular y mostrar el elemento máximo de cada fila en forma recursiva.
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

void show_on_row(int mat[25][25], int dim, int row, int col, int max){
    if(col>dim){
        printf("\nel maximo de la fila %d es: %d", row, max);
        col=0;
        row++;
        max=mat[row][col];
    }
    if(row>dim){
        return;
    }
    if(max<mat[row][col]){
        max=mat[row][col];
    }
    return show_on_row(mat, dim, row, col+1, max);
}
int main() {
    int mat[25][25], dim;
    printf("Ingrese la dimension de la matriz: ");
    scanf("%d", &dim);
    cargar(mat, dim-1, 0, 0);
    mostrar(mat, dim-1, 0, 0);
    show_on_row(mat, dim-1, 0, 0, mat[0][0]);
    return 0;
}
