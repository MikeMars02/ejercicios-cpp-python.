/*6.- Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n*/

#include <iostream>
using namespace std;

int main()
{

    int i = 0, n = 0, total = 0;

    cout << "Ingrese el valor de n: " << endl;
    cin >> n;

    while (n > i)
    {
        if (i % 2 == 0)
        {
            total -= i;
            i++;
        }
        else
        {
            total += i;
            i++;
        }
    }

    cout << "El resultado es: " << total << endl;

    return 0;
}