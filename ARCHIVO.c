#include <stdio.h>

// Declaracion de funciones (Prototipos)
void completarMatrices(int m1[2][3], int m2[2][3]);
void sumaMatriz(int m1[2][3], int m2[2][3], int res[2][3]);
void restaMatriz(int m1[2][3], int m2[2][3], int res[2][3]);
void multiplicacionMatriz(int m1[2][3], int m2[2][3], int res[2][3]);
void mostrarResultado(char operacion[], int res[2][3]);

int main() {
    // Definimos las matrices de 2 filas y 3 columnas
    int matriz1[2][3];
    int matriz2[2][3];
    int resultado[2][3];

    // Llamamos a las funciones paso a paso
    completarMatrices(matriz1, matriz2);

    sumaMatriz(matriz1, matriz2, resultado);
    mostrarResultado("Suma", resultado);

    restaMatriz(matriz1, matriz2, resultado);
    mostrarResultado("Resta", resultado);

    multiplicacionMatriz(matriz1, matriz2, resultado);
    mostrarResultado("Multiplicacion elemento a elemento", resultado);

    return 0;
}

// Funcion para pedir los numeros al usuario
void completarMatrices(int m1[2][3], int m2[2][3]) {
    int i, j;
    
    printf("--- INGRESAR LA MATRIZ 1 ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Ingrese posicion [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    
    printf("\n--- INGRESAR LA MATRIZ 2 ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Ingrese posicion [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
}

// Funcion para sumar
void sumaMatriz(int m1[2][3], int m2[2][3], int res[2][3]) {
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

// Funcion para restar
void restaMatriz(int m1[2][3], int m2[2][3], int res[2][3]) {
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            res[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

// Funcion para multiplicar (posicion por posicion)
void multiplicacionMatriz(int m1[2][3], int m2[2][3], int res[2][3]) {
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            res[i][j] = m1[i][j] * m2[i][j];
        }
    }
}

// Funcion para imprimir la matriz en pantalla
void mostrarResultado(char operacion[], int res[2][3]) {
    int i, j;
    printf("\nResultado de la %s:\n", operacion);
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n"); // Salto de línea para corregir el formato y que se vea como tabla
    }
}
