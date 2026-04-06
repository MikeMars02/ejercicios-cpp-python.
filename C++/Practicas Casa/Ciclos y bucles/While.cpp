/*La sentencia while:

    while(expresion logica){
        conunto de instruciones;
    }
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    i = 10;

    while (i >= 1)
    {
        cout << i << endl;
        i--; // Funciona con sumas ++ y resta --, haciendo posible contar creciente y descrecientemente.
    }
    // cin.ignore();
    // cin.get();
    return 0;
}