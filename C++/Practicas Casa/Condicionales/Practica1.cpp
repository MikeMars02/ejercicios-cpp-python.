/* Escriba un programa que lea tres numeros y determine cual de ellos es el maoyor.*/

#include <iostream>
using namespace std;

int main()
{

    float n1, n2, n3;

    cout << "Ingrese los numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 == n2 && n1 == n3)
    {
        cout << "Los tres numeros son iguales" << endl;
    }
    else if (n1 > n2 && n1 > n3)
    {

        cout << "El mayor es " << n1 << endl;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "El mayor es " << n2 << endl;
    }
    else
    {
        cout << " El mayor es " << n3 << endl;
    }

    return 0;
}