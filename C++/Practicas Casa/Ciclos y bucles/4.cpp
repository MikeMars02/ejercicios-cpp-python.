/*7. Escriba un programa que calcule el valor de: 1+2+3+...n*/

#include <iostream>
using namespace std;

int main()
{

    int i, n, valor = 0;

    cout << "Inserte la cantidad de n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        valor += i;
    }
    cout << "El valor de la sucesion es: " << valor << endl;

    return 0;
}