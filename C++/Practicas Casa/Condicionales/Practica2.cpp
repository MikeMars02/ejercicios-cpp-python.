/*Comprobar si un numero digitado por el usuario es positivo o negativo*/

#include <iostream>
using namespace std;

int main()
{
    float numero;

    cout << "Ingrese el numero: ";
    cin >> numero;

    if (numero == 0)
    {
        cout << "El numero es 0" << endl;
    }
    else if (numero > 0)
    {
        cout << "El numero es positivo" << endl;
    }
    else
    {
        cout << "El numero es negativo" << endl;
    }

    return 0;
}