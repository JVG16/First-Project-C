// Universidad Estatal a Distancia.
// Estudiante: Jimena Velásquez Gómez.
// Asignatura: Introducción a la Programación.
// Proyecto #1.
// Temas 1 y 2.


#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void case1()
{
    cout << "Agregar Tareas"<< endl;
    cout << "Ingrese la cantidad de tareas (entre 1 y 5): " << endl;;
    cout << "Cantidad de tareas fuera del rango" << endl;
}

void case2()
{
 //Matriz.

    cout << "+--------------+----------------+-----------------------+-----------------------" << endl;

    cout << "     Código         Nombre           Fecha Vencimiento     Minutos Invertidos" << endl;

    cout << "+--------------+----------+-----------------------------+-----------------------" << endl;

    cout << "1" << endl;
    string matriz[3][4] =
    {
        {"1234", "Clasificar material", "20/02/2025", "35"},
        {"6543", "Elaborar ensayo", "21/02/2025", "36"},
        {"5555", "Presentar ensayo", "22/02/2025", "37"}
    };
    cout << "2" << endl;
    cout << matriz[2][1] << endl;

    cout << "3" << endl;
    cout << "+--------------+" << endl;
}

int main()
{

    int option;

    // definir estructura "tareas"
    do
    {
        cout << "Menu Principal."<< endl;
        cout << "1.Agregar Tareas."<< endl;
        cout << "2.Buscar Tarea." << endl;
        cout << "3.Mostrar todas. las tareas" << endl;
        cout << "4.Eliminar Tareas." << endl;
        cout << "5.Salir del Programa." << endl;

        cout << "Por favor digite un numero del 1 al 5" << endl;
        cin >> option;
        // TODO proteger option cuando se ingresa una letra

        switch(option)
        {
        case 1:
            case1();
            break;

        case 2:
            case2();
            break;

        case 3:
            cout << "\nHas seleccionado la Opcion 3\n";
            // Aquí iría el código para la opción 3
            break;

        case 4:
            cout << "\nHas seleccionado la Opcion 4\n";
            // Aquí iría el código para la opción 4
            break;

        case 5:
            cout << "Salir del programa.";
            break;

        default:
            cout << "Opción no válida." << endl;
        }

    }
    while(option != 5);   // Repetir hasta que elija salir (opción 5)

    return 0;
}

