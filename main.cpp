// Universidad Estatal a Distancia.
// Estudiante: Jimena Vel�squez G�mez.
// Asignatura: Introducci�n a la Programaci�n.
// Proyecto #1.
// Temas 1 y 2.


#include <iostream>
#include <stdlib.h>

using namespace std;

void case1()
{
    cout << "\nFunction Opcion 1\n";
    cout << "Ingrese la cantidad de tareas (entre 1 y 5): ";
}

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

        switch(option)
        {
        case 1:
            case1(); // Aqu� ir�a el c�digo para la opci�n 1
            break;

        case 2:
            cout << "\nHas seleccionado la Opcion 2\n";
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
            cout << "\nSaliendo del programa...\n";
            break;

        default:
            cout << "\nOpcion no valida. Por favor, seleccione 1-5.\n";
        }

    }
    while(option != 5);   // Repetir hasta que elija salir (opci�n 5)

    return 0;
}

