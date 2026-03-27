#include<iostream>
using namespace std;

int main(){

    float n1, n2, n3, n4, nf;
    cout<<"Ingrese la nota del alumno: "; cin>>n1;
    cout<<"Ingrese la nota del alumno: "; cin>>n2;
    cout<<"Ingrese la nota del alumno: "; cin>>n3;
    cout<<"Ingrese la nota del alumno: "; cin>>n4;

    nf= (n1 + n2 + n3 + n4) / 4;

    cout<<"La nota final media de los alumnos fue: "<<nf<<endl;

    return 0;
}