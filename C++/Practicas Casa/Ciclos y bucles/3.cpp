/*3. Escriba un programa que lea valores enteros hasta que se introduzca un valor en rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.*/

#include <iostream>
using namespace std;

int main()
{

    int numero, suma = 0;

    do
    {
        cout << "Introduzca un numero: " << endl;
        cin >> numero;

        if (numero > 0)
        {
            suma += numero;
        }

    } while (numero != 0 && (numero < 20 || numero > 30));

    cout << "La suma total de los numeros es :" << suma << endl;

    return 0;
}
