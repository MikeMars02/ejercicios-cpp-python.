/*1. Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estandar  su tabla de multiplicar.*/

#include <iostream>
using namespace std;

int main()
{

    int numero, i = 0;

    do
    {
        cout << "Ingrese un numero en el rango del uno al diez. [1-10]:  " << endl;
        cin >> numero;

    } while (numero < 1 || numero > 10);

    for (i = 1; i <= 20; i++)
    {
        cout << "→" << numero * i << endl;
    }
    return 0;
}