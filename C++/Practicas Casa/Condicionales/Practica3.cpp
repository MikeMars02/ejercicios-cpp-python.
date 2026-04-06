/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el cararcter es una vocal minuscula, es una vocal mayuscula o no es una vocal*/

#include <iostream>
using namespace std;

int main()
{
    char letra;

    cout << "Ingrese el caracter: ";
    cin >> letra;

    switch (letra)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Es una vocal mayuscula" << endl;
        break;
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Es una vocal minuscula" << endl;
        break;
    default:
        cout << "No es vocal" << endl;
        break;
    }
    return 0;
}