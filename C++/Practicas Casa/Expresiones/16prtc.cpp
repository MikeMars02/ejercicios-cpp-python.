/*Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2+bx+c=0.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, x1 = 0, x2 = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    if (a == 0 || ((b * b) - (4 * a * c)) < 0)
        cout << "\nError: Determinante es negativo o division entre 0" << endl;
    else
    {
        x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

        cout << "\nLas soluciones de x son: " << x1 << " y " << x2 << endl;
    }
    return 0;
}