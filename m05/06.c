// Online C compiler to run C program online
#include <stdio.h>

void cargar(int mat[25][25], int dim, int row, int col){
    if(col>dim){
        col=0;
        row++;
    }
    
    if(row>dim){
        return;
    }
  
    printf("Ingrese el nro a cargar en la fila %d, columna %d \n", row, col);
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

int minimo(int mat[25][25], int dim, int row, int col, int min){
    if(col>dim){
        col=0;
        row++;
    }
    if(row>dim){
        return min;
    }
    if(min>mat[row][col]){
        min=mat[row][col];
    }
    return minimo(mat, dim, row, col+1, min);
}

int main() {
    int mat[25][25], dim, min;
    printf("Ingrese la dimension de la matriz: ");
    scanf("%d", &dim);
    cargar(mat, dim-1, 0, 0);
    mostrar(mat, dim-1, 0, 0);
    min = minimo(mat, dim-1, 0, 0, mat[0][0]);
    printf("\nel numero minimo es: %d", min);
    return 0;
}



