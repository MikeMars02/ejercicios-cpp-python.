/* 6.- Escriba un programa que calcule el valor de: 2^1+2^2+2^3...2^n*/

#include <iostream>
using namespace std;

int main()
{

    int n = 0, i = 1, p = 0;

    cout << "Ingrese un valor de 2^n: " << endl;
    cin >> n;

    if (n == 0)
    {
        cout << "El valor de 2^" << n << " es: 1" << endl;
    }
    else
    {
        while (n >= i)
        {
            p += pow(2, i);
            i++;
        }
    }
    cout << "El valor de 2^" << n << " es: " << p << endl;

    return 0;
}