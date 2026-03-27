import colorama
from colorama import *
init(autoreset=True)
import random

def main():
    pi=3.14

    print(Fore.GREEN+"Hola")

    print(Fore.GREEN+f"El valor de pi es {pi}")

    print(Fore.GREEN+f"El valor de pi es {pi}", end=" ")
    
    print(Fore.GREEN+f"{pi}")
    
    print(Fore.BLUE+"Elaborado por:", end=" ")
    print(Fore.GREEN+"Maikell")    

    print()
main()

