import numpy as np
import colorama
from colorama import *


def main():
    # Declarar e inicializar las Estructuras.
    n = np.array(
        [
            2233,
            4050,
            2020,
            3030,
            1515,
            8010,
            5525,
            1414,
        ]
    )
    s1 = np.array([0] * 8)
    s2 = np.array([0] * 8)

    # Definir Variables Globales
    n1: int
    n2: int
    n1 = 0
    n2 = 0

    # Funciones y Procedimientos
    def Separar(num):
        nonlocal n1, n2
        n1 = num // 100
        n2 = num % 100

    def Sumar(x, y):
        res: int
        res = x + y
        return res

    # Programas Principales
    print(Fore.GREEN + "UCAB Elaborado por: Maikell Fernandez")
    print()
    print(Fore.MAGENTA + "Los numeros del arreglo N son: ")
    for i in range(0, 8, 1):
        print(n[i], end=" ")
    print()

    for i in range(0, 8, 1):
        Separar(n[i])
        s1[i] = Sumar(n1, n2)
    print()

    print(Fore.BLUE + "Los numeros del arreglo S1 son: ")
    for i in range(0, 8, 1):
        print(s1[i], end=" ")
    print()

    print(Fore.BLUE + "Los numeros del arreglo S2 son: ")
    for i in range(0, 8, 1):
        s2[i] = s1[i] + n[7 - i]
        print(s2[i], end=" ")
    print()

    # Buscar 3050 en s2

    valor_buscado = int(
        input(Fore.LIGHTGREEN_EX + "Ingrese el valor que desea buscar en S2: ")
    )
    encontrado = False
    posicion = -1

    for i in range(0, 8, 1):
        if s2[i] == valor_buscado:
            encontrado = True
            posicion = i
            break

    if encontrado:
        print(f"Valor {valor_buscado} encontrado en el índice {posicion}")
        print()
    else:
        print(f"El valor {valor_buscado} no fue encontrado en el arreglo.")
        print()

    # Ordenar s2 en forma descendente
    for i in range(0, 8 - 1):
        for j in range(i + 1, 8):
            if s2[j] > s2[i]:
                s2[i], s2[j] = s2[j], s2[i]

    print(Fore.YELLOW + "Los numeros de S2 ordenados descendentemente son: ")
    for i in range(0, 8, 1):
        print(s2[i], end=" ")
    print()


main()
