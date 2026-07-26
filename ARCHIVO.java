import java.util.Scanner;

public class Programacion {

    public static void main(String[] args) {
        // Definimos las matrices de 2 filas y 3 columnas
        int[][] matriz1 = new int[2][3];
        int[][] matriz2 = new int[2][3];
        int[][] resultado = new int[2][3];

        // Llamamos a las funciones paso a paso
        completarMatrices(matriz1, matriz2);

        sumaMatriz(matriz1, matriz2, resultado);
        mostrarResultado("Suma", resultado);

        restaMatriz(matriz1, matriz2, resultado);
        mostrarResultado("Resta", resultado);

        multiplicacionMatriz(matriz1, matriz2, resultado);
        mostrarResultado("Multiplicacion elemento a elemento", resultado);
    }

    // Funcion para pedir los numeros al usuario
    public static void completarMatrices(int[][] m1, int[][] m2) {
        Scanner teclado = new Scanner(System.in);
        int i, j;
        
        System.out.println("--- INGRESAR LA MATRIZ 1 ---");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                System.out.print("Ingrese posicion [" + i + "][" + j + "]: ");
                m1[i][j] = teclado.nextInt();
            }
        }
        
        System.out.println("\n--- INGRESAR LA MATRIZ 2 ---");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                System.out.print("Ingrese posicion [" + i + "][" + j + "]: ");
                m2[i][j] = teclado.nextInt();
            }
        }
    }

    // Funcion para sumar
    public static void sumaMatriz(int[][] m1, int[][] m2, int[][] res) {
        int i, j;
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                res[i][j] = m1[i][j] + m2[i][j];
            }
        }
    }

    // Funcion para restar
    public static void restaMatriz(int[][] m1, int[][] m2, int[][] res) {
        int i, j;
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                res[i][j] = m1[i][j] - m2[i][j];
            }
        }
    }

    // Funcion para multiplicar (posicion por posicion)
    public static void multiplicacionMatriz(int[][] m1, int[][] m2, int[][] res) {
        int i, j;
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                res[i][j] = m1[i][j] * m2[i][j];
            }
        }
    }

    // Funcion para imprimir la matriz en pantalla
    public static void mostrarResultado(String operacion, int[][] res) {
        int i, j;
        System.out.println("\nResultado de la " + operacion + ":");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                System.out.print(res[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
