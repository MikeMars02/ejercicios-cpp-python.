/*8.- Realice un programa que solicite al usuario qu epiense un numero entero entre el 1 y 100. El programa debe generar un numero aleatorio que en ese mismo rango [1-100], indicarle el usuario si el numero que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine . y por ultimo mostrarle el numero de intentos que le llevo.

variable= limite_inferior + rand() % (limite_superior +1 - limite_inferior);*/

#include <iostream>
#include <time.h>
#include <random>

using namespace std;

int main()
{
    int numero, dato, contador = 0;

    srand(time(NULL)); // Generar un numero alatorio
    dato = (1 + rand() % (100));

    do
    {
        cout << "\nDigite un numero: " << endl;
        cin >> numero;

        if (numero > dato)
        {
            cout << "\nDigite un numero menor" << endl;
        }
        if (numero < dato)
        {
            cout << "\nDigite un numero mayor\n";
        }
        contador++;
    } while (numero != dato);

    cout << "\nFelicidades adivinaste el numero\n";
    cout << "Numero de intentos: " << contador << endl;

    cin.get();

    return 0;
}