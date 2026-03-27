/*1. Escribe un progrma que lea de la entrada estandar dos numeros 
y muestre en la salidad estandar su suma, resta, multiplicacion y division*/

#include <iostream>

using namespace std;

int main(){

float numero1, numero2, suma=0, resta=0, multiplicacion=0, division=0;

cout<<"Ingrese un numero: "; cin>>numero1;

cout<<"\nIngrese otro numero: "; cin>>numero2;

cout<<"\nLas operaciones de: " <<numero1;
cout<<" y las operaciones de: " <<numero2;

suma= numero1 + numero2;
resta= numero1 - numero2;
multiplicacion= numero1 * numero2;
division= numero1 / numero2;

cout<<"\n\nLa suma es: " <<suma;
cout<<"\nLa resta es: " <<resta;
cout<<"\nLa multiplicacion es: " <<multiplicacion;
cout<<"\nLa division es: " <<division;

    return 0;
}