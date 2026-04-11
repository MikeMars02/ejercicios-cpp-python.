/*Escriba un programa que calcule x^y, donde tanto x como y sean enteros positivos sin utilizar la funcion pow.*/

#include <iostream>
using namespace std;

int main()
{

    int x, y, resu;

    cout << "Inserte un valor para x: ";
    cin >> x;
    cout << "Inserte un valor para y: ";
    cin >> y;

    resu = 1;
    for (int i = 1; i <= y; i++)
    {
        resu *= x;
    }
    cout << "La respuesta es: " << resu << endl;
}
