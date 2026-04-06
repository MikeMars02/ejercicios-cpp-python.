/*La sentencia do while

    do{
        conjunto de instrucciones;
        }
    while(expresion logica){

    }
    */

#include <iostream>
//#include <cstdlib> <- util para varias cositas
using namespace std;

int main()
{
    int i;
    i = 10;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);
}