/*3. Realice un programa que lea de la entrada estandar los siguientes datos de una persona:

Edad: dato tipo entero.
Sexo: dato tipo caracter.
Altura en metros: dato tipo real.

Tras leer los datos el programa debe mostrarlos en la salida estandar.*/

#include <iostream>

using namespace std;

int main() {
    int edad;
    char sexo[10];
    float altura;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    cout << "\nDatos de la persona:" << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}