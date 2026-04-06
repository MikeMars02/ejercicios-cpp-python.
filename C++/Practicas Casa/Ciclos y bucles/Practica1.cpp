/* Realice un programa que lea de la entrada estandar numeros que hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores  mayores a cero leidos*/

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int contador = 0;

    cout << "Ingrese numeros (0 para terminar): " << endl;

    do
    {
        cin >> numero;
        if (numero > 0)
        {
            contador++;
        }
    } while (numero != 0);

    cout << "Cantidad de numeros mayores a cero: " << contador << endl;

    return 0;
}