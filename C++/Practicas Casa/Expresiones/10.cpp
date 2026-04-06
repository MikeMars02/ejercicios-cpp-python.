#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float a,b,c,x1,x2 = 0;

    cout<<"Ingrese valor de a: "; cin>>a; 
    cout<<"Ingrese valor de b: "; cin>>b; 
    cout<<"Ingrese valor de c: "; cin>>c;  

    x1 = (-b + (sqrt(pow(b,2)-4*a*c)))/(2*a);
    x2 = (-b - (sqrt(pow(b,2)-4*a*c)))/(2*a);

    cout<<"\nLas soluciones son x: "<<x1<<endl<<x2<<endl;


    return 0;
}