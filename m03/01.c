/*
Cargar una matriz de n*n de números enteros. Mostrar: 
a) la sumatoria de los elementos de la 2º fila. 
b) el mayor elemento de la segunda columna.
c) el promedio de todos los múltiplos de 5 en la matriz. 
d) la sumatoria de la diagonal principal de la matriz.
e) el elemento mínimo de cada fila. 
f) los elementos de la diagonal secundaria.
g) los elementos que se encuentran debajo de la diagonal principal.
h) si la matriz es simétrica.
*/

#include <stdio.h>

void load(int mat[][5], int n);
void show(int mat[][5], int n);
int sum(int mat[][5], int n, int row);
int find_max_by_col(int mat[][5], int n, int col);
int prom_mult_5(int mat[][5], int n);
int sum_pp_diag(int mat[][5], int n);
void min_by_row(int mat[][5], int n);
void sum_sec_diag(int mat[][5], int n);
void show_below_pp_diag(int mat[][5], int n);
void is_sim(int mat[][5], int n);

int main(){
    int dim, mat[5][5];

    do{
        printf("Ingrese la dimension de la matriz:\t");
        scanf("%d", &dim);
        if(dim > 5 || dim < 0){
            printf("Error, la matriz debe ser de dimension 1 a 5\n");
        }
    } while (dim<0 || dim>5);
    
    load(mat, dim);
    show(mat,dim);
    printf("la sumatoria de los elementos de la 2º fila es: %d \n", sum(mat, dim, 1));
    printf("el mayor elemento de la segunda columna es: %d \n", find_max_by_col(mat, dim, 1));
    printf("el promedio de todos los múltiplos de 5 en la matriz es: %d \n",prom_mult_5(mat,dim));
    printf("la sumatoria de la diagonal principal de la matriz es: %d \t",  sum_pp_diag(mat, dim));
    min_by_row(mat, dim);
    printf("los elementos de la diagonal secundaria:");
    sum_sec_diag(mat, dim);
    printf("\n los elementos que se encuentran debajo de la diagonal principal\n");
    show_below_pp_diag(mat,dim);
    is_sim(mat,dim);
    return 0;
}

void load(int mat[][5], int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("ingrese el valor a ingresar en la posicion %d %d : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void show(int mat[][5], int n){
    int i, j;
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d \t", mat[i][j]);
        }
    }
    printf("\n");
}

int sum(int mat[][5], int n, int row){
    int acc = 0, i;
    for (i=0;i<n;i++){
        acc+=mat[row][i];
    }
    return acc;
}

int find_max_by_col(int mat[][5], int n, int col){
    int max, i;
    max=mat[0][col];
    for(i=1;i<n;i++){
        if(mat[i][col]>max){
            max=mat[i][col];
        }
    }
    return max;
}

int prom_mult_5(int mat[][5], int n){
    int acc, count, i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(mat[i][j] !=0 && mat[i][j] % 5 == 0){
               acc+=mat[i][j];
               count++;
           }
        }
    }
    if(count > 0){
        return acc/count;
    }
    return 0;
}

int sum_pp_diag(int mat[][5], int n){
    int i, acc=0;
    for(i=0;i<n;i++){
        acc+=mat[i][i];
    }
    return acc;
}

void min_by_row(int mat[][5], int n){
    int i, j, min;
    for(i=0;i<n;i++){
        printf("\n");
        min=mat[i][0];
        for(j=1;j<n;j++){
            if(min>mat[i][j]){
                min=mat[i][j];
            }
        }
        printf("El minimo de la fila %d es el numero: %d ", i, min);
    }
    printf("\n");
}

void sum_sec_diag(int mat[][5], int n){
    int i, col;
    col = n-1;
    for(i=0; i<n;i++){
       printf("%d \t",mat[i][col]); 
       col--;
    }
}

void show_below_pp_diag(int mat[][5], int n){
    int i, j;
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0; j<i; j++){
            printf("%d \n", mat[i][j]);
        }
    }
}


void is_sim(int mat[][5], int n){
    int i, j, cont=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j] == mat[j][i]){
                cont++;
            }
        }
    }
    if(cont == n*n){
        printf("\nEs simetrica.");
    } else {
        printf("\nNo es simetrica");
    }
}















