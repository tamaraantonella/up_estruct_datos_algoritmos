// Diseñar un algoritmo recursivo que nos permita obtener el determinante de una
// matriz cuadrada de dimensión n.
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

int calc_prod_diag(int mat[25][25], int dim, int row, int col, int var){
    if(col>dim || col<0){
        return 1;
    }
    return calc_prod_diag(mat, dim, row+1, col+var, var) * mat[row][col];
}

int cal_det(int mat[25][25], int dim){
    int a, b;
    a = calc_prod_diag(mat, dim-1, 0, 0, 1);
    b = calc_prod_diag(mat, dim-1, 0, dim-1, -1);
    return a - b;
}

int main() {
    int mat[25][25], dim, det;
    printf("Ingrese la dimension de la matriz: ");
    scanf("%d", &dim);
    cargar(mat, dim-1, 0, 0);
    mostrar(mat, dim-1, 0, 0);
    det = cal_det(mat, dim);
    printf("Determinante: %d", det);
    return 0;
}



