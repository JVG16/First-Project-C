// Universidad Estatal a Distancia.
// Estudiante: Jimena Velásquez Gómez.
// Asignatura: Introducción a la Programación.
// Proyecto #1.
// Temas 1 y 2.


#include <iostream>

using namespace std;

int main()
{
    int opcion=0;

    cout << "Menu Principal"<< endl;
    cout << "1.Agregar Tareas"<< endl;
    cout << "2.Buscar Tarea" << endl;
    cout << "3.Mostrar todas las tareas" << endl;
    cout << "4.Eliminar Tareas" << endl;
    cout << "5.Salir del Programa" << endl;
    cout << "Por favor, digite una opcion" << endl;
    cin >> opcion;


    //PUNTO 1, AGREGAR TAREAS.

    int CantidadTareas=0;

    do
    {
        cout << "Ingrese la cantidad de tareas (entre 1 y 5): ";
        cin >> CantidadTareas;

        if (CantidadTareas < 1 || CantidadTareas > 5)
        {
            cout << "Cantidad de tareas fuera del rango" << endl;
        }

    }
    while(CantidadTareas < 1 || CantidadTareas > 5);

    //Información por tarea.

    int codigo=0;
    char NombreDescriptivo[10];
    int HoraInicio [4];
    int HoraFinal [4];

    //Escrito (AGREGAR TAREAS).

    cout << "----------------------------------------------------" << endl;
    cout << "  Ingrese la cantidad de tareas que desea agregar: " ;
    cin >> CantidadTareas;
    cout << "---------------------------------------------------- " << endl;
    cout << " Código de la tarea: " ;
    cin >> codigo;
    cout << " Nombre de la tarea: " ;
    cin >> NombreDescriptivo;
    cout << " Fecha de vencimiento dd/mm/aaaa: " << endl;
    cout << " Hora de inicio: " ;
    cout << " Hora de finalización: " << endl;

    cout << " Desea regresar al menú principal (S/N): " << endl;







    return 0;
}



