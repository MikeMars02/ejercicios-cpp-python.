#include<iostream>
using namespace std;

//Dado un numero determinar si es parejo. Un numero es parejo si la suma de los digitos pares es igual a la suma de sus numeros impares.

int main(){
    int numero, sumaPares=0, sumaImpares=0, digito;
    cout<<"Ingrese un numero: ";
    cin>>numero;

    while(numero>0){
        digito = numero % 10; //Obtenemos el ultimo digito
        if(digito % 2 == 0){ //Si el digito es par
            sumaPares += digito; //Sumamos el digito a la suma de pares
        } else { //Si el digito es impar
            sumaImpares += digito; //Sumamos el digito a la suma de impares
        }
        numero /= 10; //Eliminamos el ultimo digito
    }

    if(sumaPares == sumaImpares){
        cout<<"El numero es parejo."<<endl;
    } else {
        cout<<"El numero no es parejo."<<endl;
    }

    return 0;
}