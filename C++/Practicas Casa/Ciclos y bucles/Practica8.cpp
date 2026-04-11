/*Realice un programa que calcule la descomposicion en factores primos de un numero entero
    Por ejemplo: 20=2*2*5
*/

#include <iostream>
using namespace std;

int main()
{
    int numero = 0, num, divisor = 2;

    cout << "\nDigite un numero: \n";
    cin >> numero;
    num = numero;

    cout << num << " = ";
    do
    {
        if (numero % divisor == 0)
        {
            cout << "->" << divisor;
            numero /= divisor;
            if (numero > 1)
            {
                cout << "x";
            }
        }
        else
        {
            divisor++;
        }
    } while (numero != 1);
    cout << endl;
    cin.get();
    return 0;
}