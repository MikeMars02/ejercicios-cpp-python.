/*11. Hacer un programa que simule un cajero automatico con un saldo inicial de 1000$*/

#include <iostream>
using namespace std;

int main()
{

    int clave, clave2, operacion = -2;
    float monto = 0, retiro = 0, extra = 0;
    monto = 1000;
    clave = 1234;
    cout << "Por favor introduzca su clave de 4 digitos: ";
    cin >> clave2;

    if (clave == clave2)
    {
        while (operacion != 0)
        {
            cout << "Bienvenido, por favor seleccione su operacion a realizar \n[1- Ver saldo disponible] \n[2- Retirar efectivo] \n[3- Depositar efectivo] \n[4- Cambiar clave] \n[0- Salir] \nIngrese su operacion → ";
            cin >> operacion;

            switch (operacion)
            {
            case 1:
                cout << "Su monto es: " << monto << "$" << endl;
                break;
            case 2:
                cout << "Ingrese el monto a retirar: " << endl;
                cin >> retiro;
                if (retiro > monto)
                {
                    monto -= retiro;
                    cout << "Su saldo es insuficente" << endl;
                    break;
                }
                else
                {
                    cout << "Aqui tiene su dinero, el nuevo saldo disponible es: " << monto << "$" << endl;
                    break;
                }
            case 3:
                cout << "Ingrese el monto a depositar" << endl;
                cin >> extra;
                monto += extra;
                cout << "Su saldo fue actualizado. Su monto disponible es: " << monto << "$" << endl;
                break;
            case 4:
                cout << "Ingrese su nueva clave de 4 digitos: " << endl;
                cin >> clave;
                cout << "Su clave fue cambiada con exito" << endl;
                break;
            case 0:
                cout << "Hasta luego" << endl;
                break;
            default:
                cout << "Por favor elija una operacion valida" << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Su clave es incorrecta" << endl;
    }

    return 0;
}