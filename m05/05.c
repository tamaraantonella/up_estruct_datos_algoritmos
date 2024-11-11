/******************************************************************************
DiseC1ar un algoritmo recursivo que permita sumar los elementos de una matriz
*******************************************************************************/
#include <stdio.h>

void load(int mat[25][25], int row, int col, int dim) {
	if(col>dim) {
		row++;
		col=0;
	}
	if(row>dim) {
		return;
	}

	printf("ingrese el numero a cargar en la fila %d columna %d: ", row, col);
	scanf("%d", &mat[row][col]);
	load(mat, row, col+1, dim);
	return;
}

void show(int mat[25][25], int row, int col, int dim) {
	if(col>dim) {
		row++;
		col=0;
		printf("\n");
	}
	if(row>dim) {
		return;
	}

	printf("%d\t", mat[row][col]);
	show(mat, row, col+1, dim);
	return;
}

int sum(int mat[25][25], int row, int col, int dim) {
	if(col>dim) {
		row++;
		col=0;
	}
	if(row>dim) {
		return 0;
	}

	return sum(mat, row, col+1, dim) + mat[row][col];
}

int main()
{
	int a[25][25], dim, res;
	printf("Choose matrix dimension :");
	scanf("%d", &dim);
	load(a, 0,0,dim-1);
	show(a, 0, 0, dim-1);
	printf("la suma de los numeros es: %d", sum(a, 0, 0, dim-1));
	return 0;
}

