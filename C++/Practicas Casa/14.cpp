#include <iostream>
using namespace std;

int main()
{

    float a, b, c, d, resultados;

    cout << "Ingrese la nota del alumno 1: ", cin >> a;

    cout << "Ingrese la nota del alumno 2: ", cin >> b;

    cout << "Ingrese la nota del alumno 3: ", cin >> c;

    cout << "Ingrese la nota del alumno 4: ", cin >> d;

    resultados = (a + b + c + d) / 4;

    cout << "La nota final media de los cuatro estudiante es: " << resultados << endl;

    return 0;
}