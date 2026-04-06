/*Escribe un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero e indicar si el numero coincide con alguno de los introducidos con anterioridad.*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;

    cout << "Indique tres numeros: ";
    cin >> n1 >> n2 >> n3;
    cout << "Indique un numero a comprobar: ";
    cin >> n4;

    if (n4 == n1 || n4 == n2 || n4 == n3)
    {
        cout << "El numero coincide." << endl;
    }
    else
    {
        cout << "El numero no coincide." << endl;
    }
}