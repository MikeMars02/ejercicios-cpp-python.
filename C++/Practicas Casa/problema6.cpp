#include<iostream>

using namespace std;

int main(){

    float a,b,c,d, resultado =0;

    cout<<"Inserte un digito a: "; cin>>a;
    cout<<"Inserte un digito b: "; cin>>b;
    cout<<"Inserte un digito c: "; cin>>c;
    cout<<"Inserte un digito d: "; cin>>d;

    resultado= (a+b)/(c+d);
    
    cout<<"\nEl resultado es: " <<resultado<<endl;
    

    return 0;
}