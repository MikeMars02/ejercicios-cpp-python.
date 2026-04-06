/*Hacer un menu que considere las siguientes opciones: 1: Cubo de un numero, 2:Numero par o impar, 3: Salir*/

#include <iostream>
using namespace std;

int main()
{

    int opc, numero;

    cout << "Elija el numero de la operacion a realizar \n [1.-Cubo de un numero] \n [2.-Numero par o impar] \n [3.- Salir] \n→ ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "Ingrese el numero que desea evaluar: ";
        cin >> numero;
        cout << "El cubo de: " << numero;
        numero = numero * numero * numero;
        cout << " es: " << numero << endl;
        break;
    case 2:
        cout << "Ingrese el numero que desea evaluar: ";
        cin >> numero;
        cout << "El numero: " << numero << " es: ";
        if (numero % 2 == 0 && numero != 0)
        {
            cout << "Par" << endl;
            break;
        }
        else
        {
            cout << "Impar" << endl;
            break;
        }
    case 3:
        cout << "Hasta luego." << endl;
        break;
    default:
        cout << "Ingresa una opcion valida" << endl;
    }

    return 0;
}