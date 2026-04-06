/*2. Escribe un progrma que lea el precio entrada estandar 
y muestre en la salidad estandar el precio del producto al aplicarle iva */

#include <iostream>

using namespace std;

int main(){

float numero1, iva=0.16;

cout<<"Ingrese el precio: "; cin>>numero1;

cout<<"\nLas operaciones de: " <<numero1;

iva= numero1 * 0.16;
numero1= numero1 + iva;

cout<<"\nEl precio final es: " <<numero1;


    return 0;
}