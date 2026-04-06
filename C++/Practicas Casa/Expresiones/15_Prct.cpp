/*Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float co, ca, hp, resultado = 0;

    cout << "Ingrese el valor del cateto adyacente: ";
    cin >> ca;
    cout << "Ingrese el valor del cateto opuesto: ";
    cin >> co;

    hp = (co * co) + (ca * ca);
    resultado = sqrt(hp);
    cout << "\nLa raiz cuadrada es " << resultado << endl;

    return 0;
}
