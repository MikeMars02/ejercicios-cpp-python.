import colorama
from colorama import *

init(autoreset=True)
import random


# Programa principal
def Pares_Nones():
    def Sumar(x, y):
        r: int

        r = x + y

        return r

    def Identificar(z):
        if (z % 2) == 0:
            b = True
        else:
            b = False
        return b

    # Encabezado
    print(Fore.GREEN + "UCAB Elaborado por Maikell Fernandez")

    # Solicitud de datos
    print(Fore.RED + "Juego de Pares o Nones")
    print()

    print("Indicar jugada: ¿Pares o Nones? 1=Pares, 2=Nones")
    j1 = int(input())
    if j1 == 1:
        j2 = 2
    else:
        j2 = 1

    print("Indique numero del 1 al 5 correspondiente al Jugador 1")
    n1 = int(input())
    n2 = random.randint(1, 5)

    # Procesamiento
    rest = Sumar(n1, n2)
    bol = Identificar(rest)
    if (bol == True) and (j1 == 1):
        J = "Par"
        gan = "Gana Jugador 1"
    elif (bol == True) and (j2 == 1):
        J = "Par"
        gan = "Gana Jugador 2"
    elif (bol == False) and (j1 == 1):
        J = "Impar"
        gan = "Gana Jugador 2"
    elif (bol == False) and (j2 == 1):
        J = "Impar"
        gan = "Gana Jugador 1"
    else:
        J = ""
        gan = ""

    if j2 == j1:
        jugada1 = "PARES"
        jugada2 = "NONES"
    else:
        jugada1 = "NONES"
        jugada2 = "PARES"

    # Salida de datos
    print(Fore.GREEN + "La jugada del Jugador 1 es: ", jugada1)
    print(Fore.GREEN + "La numero del Jugador 1 es: ", n1)
    print(Fore.BLUE + "La jugada del Jugador 2 es: ", jugada2)
    print(Fore.BLUE + "La numero del Jugador 2 es: ", n2)
    print(Fore.MAGENTA + "La suma de los 2 numeros es: ", rest)
    print(Fore.MAGENTA + "y este resultado ", J)
    print(Fore.YELLOW + gan)


Pares_Nones()
