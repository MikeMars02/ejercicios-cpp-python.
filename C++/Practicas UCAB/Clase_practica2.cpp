#include<iostream>
using namespace std;

/*Elaborar un procedimiento que calcule el producto de dos numeros por el metodo de sumas sucesivas e imprimir los resultados
desde el procedimiento. validar que los numeros sean positivos*/

void calcularProducto(int num1, int num2) {
    if (num1 <= 0 || num2 <= 0) {
        cout << "Error: Los numeros deben ser positivos." << endl;
        return;
    }

    int producto = 0;
    for (int i = 0; i < num2; i++) {
        producto += num1;
    }
    cout << "El producto de " << num1 << " y " << num2 << " es: " << producto << endl;
}

int main() {
    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    calcularProducto(numero1, numero2);

    return 0;
}