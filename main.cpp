// Universidad Estatal a Distancia.
// Estudiante: Jimena Velásquez Gómez.
// Asignatura: Introducción a la Programación.
// Proyecto #1.
// Temas 1 y 2.


#include <iostream>
#include <stdlib.h>

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

    cout << "Por favor digite un numero del 1 al 5" << endl;
    cin >> opcion;

    switch (opcion)
{
case 1:

{
 cout << "Agregar Tareas"<<endl;
 int CantidadTareas=0;

 do {
    cout << "Ingrese la cantidad de tareas (entre 1 y 5): ";
    cin >> CantidadTareas;

    if (CantidadTareas < 1 || CantidadTareas > 5) {
        cout << "La cantidad debe estar entre 1 y 5." << endl;
    }

 }while(CantidadTareas < 1 || CantidadTareas > 5);

break;

  return 0;
}

