// Universidad Estatal a Distancia.
// Estudiante: Jimena Vel�squez G�mez.
// Asignatura: Introducci�n a la Programaci�n.
// Proyecto #1.
// Temas 1 y 2.


#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int option;
    do
    {
        cout << "Menu Principal"<< endl;
        cout << "1.Agregar Tareas"<< endl;
        cout << "2.Buscar Tarea" << endl;
        cout << "3.Mostrar todas las tareas" << endl;
        cout << "4.Eliminar Tareas" << endl;
        cout << "5.Salir del Programa" << endl;

        cout << "Por favor digite un numero del 1 al 5" << endl;
        cin >> option;
        // TODO proteger option cuando se ingresa una letra

        // valores hardcoded para hacer puntos 2 y 3
        string matriz[3][4] =
        {
            {"1234", "Clasificar material", "20/02/2025", "35"},
            {"6543", "Elaborar ensayo", "21/02/2025", "36"},
            {"5555", "Presentar ensayo", "22/02/2025", "37"}
        };

        switch(option)
        {
        case 1:
        {
            // nada
            break;
        }
        case 2:
            cout << "\nHas seleccionado la Opcion 2\n";
            cout << matriz[0][0] << endl;
            // Aqu� ir�a el c�digo para la opci�n 2
            break;

        case 3:
            cout << "\nHas seleccionado la Opcion 3\n";
            // Aqu� ir�a el c�digo para la opci�n 3
            break;

        case 4:
            cout << "\nHas seleccionado la Opcion 4\n";
            // Aqu� ir�a el c�digo para la opci�n 4
            break;

        case 5:
            cout << "Salir del programa";
            break;

        default:
            cout << "Opci�n no v�lida" << endl;
        }

    }
    while(option != 5);   // Repetir hasta que elija salir (opci�n 5)

    return 0;
}

