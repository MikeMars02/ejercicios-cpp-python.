/*Escriba un programa que calcule el valor de: 1! + 2! + 3! + .. n! (suma de factoriales)*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long factorial = 1, suma = 0;

    cout << "Ingrese el valor de n!: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Error: No existen factoriales de numeros negativos." << endl;
    }
    else
    {
        int i = 1;
        while (i <= n)
        {
            factorial *= i;
            suma += factorial;
            i++;
        }

        cout << "El factorial de " << n << " es: " << suma << endl;
    }

    return 0;
}