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

    string matriz[5][4] =
    {
        {"1234", "Clasificar material", "20/02/2025", "35"},
        {"6543", "Elaborar ensayo", "21/02/2025", "36"},
        {"5555", "Presentar ensayo", "22/02/2025", "37"},
        {"", "", "", ""},
        {"", "", "", ""}
    };

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

        switch(option)
        {
        case 1:
        {

            int Tareas;

            do
            {

                cout << "--------------------------------------------------------"<< endl;
                cout << " Digite la cantidad de tareas (1-5): ";
                cin >> Tareas;
                cout << "--------------------------------------------------------"<< endl;

                if (Tareas <1 || Tareas>5)
                {
                    cout << "Opci�n inv�lida, vuelva a intentarlo" << endl;

                }

            }
            while(Tareas <1 || Tareas>5);


            for (int i=0; i < Tareas; i++ )

            {
                int Codigo;

                do
                {
                    cout << "C�digo de la tarea (4 d�gitos): ";
                    cin >> Codigo;

                    if (Codigo < 1000 || Codigo > 9999)
                    {
                        cout << " El c�digo debe de tener como m�ximo 4 d�gitos " << endl ;
                    }
                }
                while (Codigo < 1000 || Codigo > 9999);


                string NombreDescriptivo;

                do {
                   cout << "Nombre de la tarea:";
                cin >> NombreDescriptivo;
                if (NombreDescriptivo == " "){
                  cout << " No debe quedar el campo vac�o " << endl ;
                }
                 }
                while (NombreDescriptivo == " ");

                int Vencimiento;
                cout << "Fecha de vencimiento(dd/mm/aaaa):";
                cin >> Vencimiento;

                string HoraInicio;
                cout << "Hora de inicio (hh:mm):";
                cin >> HoraInicio;

                string HoraFinal;
                cout << "Hora de finalizaci�n (hh:mm):";
                cin>> HoraFinal;

                //Tareas

                string Regresar;


                cout << "Desea regresar al men� principal S/N: ";
                cin>> Regresar;
                if(Regresar=="S"){
                     cout << "Regresar al men�";
                }
               if(Regresar=="N"){
                     cout << "Registrar nuevas tareas";
                }


                // Conversi�n minutos invertidos

                int MinutosInvertidos;


                //Matriz

                string Matriz [4][3];

                for (int i=0; i < Tareas; i++ )
                {

                    Matriz[i][0]=Codigo;
                    Matriz[i][1]= NombreDescriptivo;
                    Matriz[i][2]= Vencimiento;
                    Matriz[i][3]= MinutosInvertidos;

                }

                break;
            }

            case 2:
            {
                // Buscar c�digo.

                string Buscar;
                bool Encontrada = false ;

                cout << "Digite el c�digo de la tarea que desea buscar." << endl;
                cin >> Buscar;

                for (int i = 0; i < 5; i++)
                {
                    if (matriz[i][0]==Buscar)
                    {
                        Encontrada = true;

                        cout << "Tarea encontrada" << endl;

                        cout << "+--------------+----------------+-----------------------+-----------------------" << endl;

                        cout << "     C�digo         Nombre           Fecha Vencimiento     Minutos Invertidos" << endl;

                        cout << "+--------------+----------+-----------------------------+-----------------------" << endl;


                        cout << "     " << matriz[i][0] ;
                        cout << "        " << matriz[i][1] ;
                        cout << "       " << matriz[i][2] ;
                        cout << "        " << matriz[i][3] << " " ;
                        break;
                    }
                }

                if ( !Encontrada)
                {
                    cout << "Tarea no encontrada";
                }
                break;
            }


            case 3:
            {
                bool MostrarTareas= false;
                for (int i=0; i<5; i++)
                {
                    if(matriz[i][0] != "")
                    {
                        MostrarTareas= true;
                        break;
                    }
                }

                if (!MostrarTareas)
                {
                    cout << " No hay tareas registradas " << endl;
                }

                else
                {
                    cout << " Mostrar tareas registradas " << endl;

                    cout << "+--------------+----------+-----------------------------+-----------------------" << endl;

                    cout << "     C�digo         Nombre           Fecha Vencimiento     Minutos Invertidos" << endl;

                    cout << "+--------------+----------+-----------------------------+-----------------------" << endl;

                    for (int i = 0; i < 5; i++)
                    {
                        if(matriz[i][0] != "")
                        {
                            cout << "    " << matriz[i][0];
                            cout << "    " << matriz[i][1];
                            cout << "    " << matriz[i][2];
                            cout << "    " << matriz[i][3] << endl;
                        }
                    }
                }

                break;
            }

            case 4:

            {
                string TareaEliminar;
                bool Encontrada = false;

                cout << "Digite el c�digo de la tarea que desea eliminar" << endl;
                cin >> TareaEliminar;

                for (int i = 0; i < 5; i++)
                {
                    if (matriz[i][0] == TareaEliminar)
                    {
                        Encontrada = true;

                        for (int j = 0; j < 4; j++)
                        {
                            matriz[i][j] = "";
                        }

                        cout << "Tarea eliminada correctamente." << endl;
                        break;
                    }
                }

                if (!Encontrada)
                {
                    cout << "Tarea no registrada con ese c�digo" << endl;
                }

                break;
            }


            case 5:
                cout << "Salir del programa";
                break;

            default:
                cout << "Opci�n no v�lida" << endl;
            }

        }
    }
    while(option != 5);

    return 0 ;
}

