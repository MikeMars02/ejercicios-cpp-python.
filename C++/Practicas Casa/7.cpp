//Escribe la siguiente expresion como expresion en C++

#include<iostream>

using namespace std;

int main(){

    float a,b,c,d,e,f, resultado = 0;

    cout<<"Ingrese un digito a: "; cin>>a;
    cout<<"Ingrese un digito b: "; cin>>b;
    cout<<"Ingrese un digito c: "; cin>>c;
    cout<<"Ingrese un digito d: "; cin>>d;
    cout<<"Ingrese un digito e: "; cin>>e;
    cout<<"Ingrese un digito f: "; cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    cout<<"El resultado es: "<<resultado<<endl;


    return 0;
}