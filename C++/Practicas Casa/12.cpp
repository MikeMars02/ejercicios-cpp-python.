#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d;

    cout << "ingrese el valor a: ";
    cin >> a;
    cout << "ingrese el valor b: ";
    cin >> b;
    cout << "ingrese el valor c: ";
    cin >> c;
    cout << "ingrese el valor d: ";
    cin >> d;

    if (c + d == 0)
    {
        cout << "Error: No se puede dividir entre 0." << endl;
    }
    else
    {
        float resultado = (a + (b / (c - d)));
        cout << "El resultado es:" << resultado << endl;
    }
    return 0;
}