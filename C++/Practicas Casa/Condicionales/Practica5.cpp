/*Mostrar los meses del año, pidiendo al usuario un numero entre (1-12), y mostrar el mes al que corresponde */

#include <iostream>
using namespace std;

int main()
{
    int mes;

    cout << "Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Noviembre, Diciembre. Ingresa un numero para indicarte a que mes corresponde (1-12): ";
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "El mes que elegiste es: Enero " << endl;
        break;
    case 2:
        cout << "El mes que elegiste es: Febrero" << endl;
        break;
    case 3:
        cout << "El mes que elegiste es: Marzo" << endl;
        break;
    case 4:
        cout << "El mes que elegiste es: Abril" << endl;
        break;
    case 5:
        cout << "El mes que elegiste es: Mayo" << endl;
        break;
    case 6:
        cout << "El mes que elegiste es: Junio" << endl;
        break;
    case 7:
        cout << "El mes que elegiste es: Julio" << endl;
        break;
    case 8:
        cout << "El mes que elegiste es: Agosto" << endl;
        break;
    case 9:
        cout << "El mes que elegiste es: Septiembre" << endl;
        break;
    case 10:
        cout << "El mes que elegiste es: Octubre" << endl;
        break;
    case 11:
        cout << "El mes que elegiste es: Noviembre" << endl;
        break;
    case 12:
        cout << "El mes que elegiste es: Diciembre" << endl;
        break;
    }
}