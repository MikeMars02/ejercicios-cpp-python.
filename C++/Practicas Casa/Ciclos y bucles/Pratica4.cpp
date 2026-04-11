/*Escriba un programa que calcule el valor de 1+3+5+...2n-1*/

#include <iostream>
using namespace std;

int main()
{

    int i, n, valor = 0;

    cout << "Inserte la cantidad de n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        valor += (2 * i - 1);
    }
    cout << "El valor de la sucesion es: " << valor << endl;

    return 0;
}