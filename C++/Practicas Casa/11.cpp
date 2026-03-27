// Escribe la siguiente expresion como expresion en C++:

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d, e, f;
    cout << "Ingrese valor a: ";
    cin >> a;
    cout << "Ingrese valor b: ";
    cin >> b;
    cout << "Ingrese valor c: ";
    cin >> c;
    cout << "Ingrese valor d: ";
    cin >> d;
    cout << "Ingrese valor e: ";
    cin >> e;
    cout << "Ingrese valor f: ";
    cin >> f;

    if (c == 0 || f == 0)
    {
        cout << "Error: No se puede dividir por cero (c o f es 0)." << endl;
    }
    else
    {
        float resultado = (a + (b / c)) / (d + (e / f));
        cout << "\nEl resultado es: " << resultado << endl;
    }

    return 0;
}
