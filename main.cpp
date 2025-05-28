// Universidad Estatal a Distancia.
// Estudiante: Jimena Velásquez Gómez.
// Asignatura: Introducción a la Programación.
// Proyecto #1.
// Temas 1 y 2.


#include <iostream>
#include <stdlib.h>

using namespace std;

void case1()
{
    cout << "Agregar Tareas";
    cout << "Ingrese la cantidad de tareas (entre 1 y 5): " << endl;;
    cout << "Cantidad de tareas fuera del rango" << endl;


//Matriz.

    int filas=4;
    int columnas=3;
    char matriz [4][3];
    matriz [0][0]= '1234';
    matriz [0][1]= 'Clasificar material';
    matriz [0][2]= '20/02/25';
    matriz [0][3]= '35';
    matriz [1][0]= '6543';
    matriz [1][1]= 'Elaborar ensayo';
    matriz [1][2]= '21/02/25';
    matriz [1][3]= '36';
    matriz [2][0]= '5555';
    matriz [2][1]= 'Presentar ensayo';
    matriz [2][2]= '22/02/25';
    matriz [2][3]= '37';

    cout << "+--------------+----------------+-----------------------+-----------------------" << endl;

    cout << "     Código         Nombre           Fecha Vencimiento     Minutos Invertidos" << endl;

    cout << "+--------------+----------+-----------------------------+-----------------------" << endl;




// asigna hardcoded las 3 tareas de la hoja
//| 1234
//| 6543
//| 5555

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
                cout << "Agregar Tareas";
                break;

            case 2:
                cout << "\nHas seleccionado la Opcion 2\n";
                // Aquí iría el código para la opción 2
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

        return 0;}

