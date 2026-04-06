/*9. Realice un programa que calcule el valor que toma la siguiente funcion para unos valores dados de x e y*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float x, y, resultado = 0;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    resultado = (sqrt(x)) / ((y * y) - 1);
    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}