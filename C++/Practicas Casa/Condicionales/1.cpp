/*1.  Escriba un programa que lea dos numeros y determine cual de ellos es el mayor*/

#include <iostream>
using namespace std;

int main()
{

    float n1, n2;

    cout << "Ingrese los numeros: ";
    cin >> n1 >> n2;

    if (n1 == n2)
    {
        cout << "Ambos numeros son iguales" << endl;
    }
    else if (n1 > n2)
    {

        cout << "El mayor es " << n1 << endl;
    }
    else
    {
        cout << "El mayor es " << n2 << endl;
    }

    return 0;
}