#include<iostream> 
#include<cmath>
using namespace std;

int main(){

    float catetoO,catetoA, hipotenusa;

    cout<<"Ingrese valor del cateto opuesto: "; cin>>catetoO;
    cout<<"Ingrese valor del cateto adyacente: "; cin>>catetoA;

    hipotenusa= sqrt(pow(catetoA, 2) + pow(catetoO, 2));

    cout<<"\nEl valor de la hipotenusa es: "<<hipotenusa<<endl;


    return 0;
}