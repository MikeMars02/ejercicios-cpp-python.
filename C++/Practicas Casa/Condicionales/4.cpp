/*Escriba un programa que solicite una edad (un entero) e indique en la salida estandar si la edad introducida esta en el rango [18-25].*/

#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 18)
    {
        cout << "Tu edad es menor al rango permitido [18-25]" << endl;
    }
    else if (edad > 25)
    {
        cout << "Tu edad es mayor al rango permitido [18-25]" << endl;
    }
    else
    {
        cout << "Estas dentro del rango permitido. Bienvenido." << endl;
    }
    return 0;
}