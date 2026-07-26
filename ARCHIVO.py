# Pide los números para las dos matrices
def completar_matrices(m1, m2):
    print("--- INGRESAR LA MATRIZ 1 ---")
    for i in range(2):
        for j in range(3):
            m1[i][j] = int(input(f"Ingrese posicion [{i}][{j}]: "))

    print("\n--- INGRESAR LA MATRIZ 2 ---")
    for i in range(2):
        for j in range(3):
            m2[i][j] = int(input(f"Ingrese posicion [{i}][{j}]: "))

# Suma las matrices
def suma_matriz(m1, m2, res):
    for i in range(2):
        for j in range(3):
            res[i][j] = m1[i][j] + m2[i][j]

# Resta las matrices
def resta_matriz(m1, m2, res):
    for i in range(2):
        for j in range(3):
            res[i][j] = m1[i][j] - m2[i][j]

# Multiplica las matrices elemento por elemento
def multiplicacion_matriz(m1, m2, res):
    for i in range(2):
        for j in range(3):
            res[i][j] = m1[i][j] * m2[i][j]

# Muestra la matriz en pantalla
def mostrar_resultado(operacion, res):
    print(f"\nResultado de la {operacion}:")
    for i in range(2):
        for j in range(3):
            print(res[i][j], end="\t")
        print() # Salto de línea

# --- PROGRAMA PRINCIPAL ---

# Creamos las matrices vacías de 2 filas y 3 columnas
matriz1 = [[0, 0, 0], [0, 0, 0]]
matriz2 = [[0, 0, 0], [0, 0, 0]]
resultado = [[0, 0, 0], [0, 0, 0]]

# Ejecución de las funciones
completar_matrices(matriz1, matriz2)

suma_matriz(matriz1, matriz2, resultado)
mostrar_resultado("Suma", resultado)

resta_matriz(matriz1, matriz2, resultado)
mostrar_resultado("Resta", resultado)

multiplicacion_matriz(matriz1, matriz2, resultado)
mostrar_resultado("Multiplicacion elemento a elemento", resultado)
