/*En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:

    a) Alumnos que aprobraron todos los examenes.
    b) Alumnos que aprobaron al menos un examen.
    c) Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el calculo de las estadisticas. */

#include <iostream>
using namespace std;

int main()
{

    int A = 1, E = 0, Nota = 0, AproboT = 0, Aprobo1 = 0, AproboU = 0;

    cout << "Cuantos examenes evaluo en este periodo?: " << endl;
    cin >> E;

    while (A <= 5)
    {
        int ExamenesAprobados = 0;
        bool Ultimo = false;

        for (int i = 1; i <= E; i++)
        {

            cout << "Ingrese la nota del alumno " << A << " en el examen: " << i << endl;
            cin >> Nota;

            if (Nota >= 10)
            {
                ExamenesAprobados += 1;
                if (i == E)
                {
                    Ultimo = true;
                }
            }
        }
        if (ExamenesAprobados == E)
        {
            AproboT += 1;
        }
        if (ExamenesAprobados >= 1)
        {
            Aprobo1 += 1;
        }
        if (ExamenesAprobados == 1 && Ultimo == true)
        {
            AproboU += 1;
        }

        A++;
    }

    cout << "Aprobo todo: " << AproboT << endl;
    cout << "Aprobo al menos uno: " << Aprobo1 << endl;
    cout << "Aprobo ultimo: " << AproboU << endl;
    return 0;
}