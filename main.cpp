// Universidad Estatal a Distancia.
// Estudiante: Jimena Vel�squez G�mez.
// Asignatura: Introducci�n a la Programaci�n.
// Proyecto #1.
// Temas 1 y 2.


#include <iostream>
#include <stdlib.h>
#include <string>  // Necesario para to_string()

using namespace std;

int main()
{
    int option;

    // codigo - nombre - fecha - hora inicio - hora fin - Minutos Invertidos
    string matriz[5][6] =
    {
        {"", "", "", "", "", ""},
        {"", "", "", "", "", ""},
        {"", "", "", "", "", ""},
        {"", "", "", "", "", ""},
        {"", "", "", "", "", ""}
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

                //C�digo.

                int codigo;

                do
                {
                    cout << "C�digo de la tarea (4 d�gitos): ";
                    while (!(cin >> codigo))
                    {
                        cout << "Error: Ingrese solo n�meros: ";
                        cin.clear();
                        cin.ignore(10000);
                    }

                    if (codigo < 1000 || codigo > 9999)
                    {
                        cout << " El c�digo debe de tener como m�ximo 4 d�gitos " << endl ;
                    }
                }
                while (codigo < 1000 || codigo > 9999);

                //Nombre de la tarea.

                string nombreDescriptivo;

                cin.ignore();

                do
                {
                    cout << "Nombre de la tarea:";
                    getline(cin,nombreDescriptivo);

                    if (nombreDescriptivo.empty())
                    {
                        cout << "No debe quedar el campo vac�o" << endl;
                    }
                }
                while (nombreDescriptivo.empty());

                //Fecha de vencimiento.

                int dd, mm, aaaa;
                char slach1, slach2;
                bool esValida;
                do
                {

                    cout << "Fecha de vencimiento(dd/mm/aaaa):";
                    cin >> dd >> slach1 >> mm >> slach2 >> aaaa;

                    esValida=true;

                    if(slach1!= '/' || slach2!= '/')
                    {
                        esValida=false;
                    }
                    if (dd < 1 || dd > 31)
                    {
                        esValida = false;
                    }
                    if (mm < 1 || mm > 12)
                    {
                        esValida = false;
                    }
                    if (aaaa > 2025)
                    {
                        esValida = false;
                    }

                    if (!esValida)
                    {
                        cout << "Debe escribir la fecha en formato v�lido: dd/mm/aaaa" << endl;
                    }

                }
                while(!esValida);

                //C�lculo hora de inicio.

                int horaInicio, minutosInicio;
                char dosPuntos1;
                bool tiempoInicio;
                do
                {


                    cout << "Hora de inicio (hh:mm):";
                    cin >> horaInicio >> dosPuntos1 >> minutosInicio;
                    tiempoInicio=true;

                    if (horaInicio < 0 || horaInicio >23)
                    {
                        tiempoInicio=false;
                    }
                    if(dosPuntos1!=':')
                    {
                        tiempoInicio=false;
                    }
                    if (minutosInicio < 0 || minutosInicio >59)
                    {
                        tiempoInicio=false;
                    }
                    if(!tiempoInicio)
                    {
                        cout << "Debe escribir la hora de inicio en el formato: hh:mm " << endl;
                    }
                }
                while(!tiempoInicio);

                //C�lculo hora de finalizaci�n.

                int horaFinal, minutosFinal;
                char dosPuntos2;
                bool tiempoFinal;
                do
                {
                    cout << "Hora de finalizaci�n (hh:mm):";
                    cin >> horaFinal >> dosPuntos2 >> minutosFinal;
                    tiempoFinal=true;

                    if (horaFinal < 0 || horaFinal >23)
                    {
                        tiempoFinal=false;
                    }
                    if(dosPuntos2!=':')
                    {
                        tiempoFinal=false;
                    }

                    if (minutosFinal < 0 || minutosFinal >59)
                    {
                        tiempoFinal=false;
                    }

                    if(!tiempoFinal)
                    {
                        cout << "Debe escribir la hora de finalizaci�n en el formato: hh:mm " << endl;
                    }
                }
                while(!tiempoFinal);

                // Conversi�n minutos invertidos.

                int totalMinInicio = horaInicio * 60 + minutosInicio;
                int totalMinFinal = horaFinal * 60 + minutosFinal;
                int minutosInvertidos;

                if(totalMinFinal >= totalMinInicio)
                {
                    minutosInvertidos= totalMinFinal-totalMinInicio;
                    cout << "DENTRO minutosInvertidos" << minutosInvertidos;
                }

                string Regresar;

                cout << "Desea regresar al men� principal S/N: ";
                cin>> Regresar;
                if(Regresar=="S")
                {
                    cout << "Regresar al men�";
                }
                if(Regresar=="N")
                {
                    cout << "Registrar nuevas tareas";
                }


                //Asignar Matriz

                // codigo - nombre - fecha - hora inicio - hora fin - Minutos Invertidos
                matriz[i][0]= to_string(codigo);
                matriz[i][1]= nombreDescriptivo;
                matriz[i][2]= to_string(dd) + "/" + to_string(mm) + "/" + to_string(aaaa);
                matriz[i][3]= to_string(horaInicio)+ ":" + to_string(minutosInicio);
                matriz[i][4]= to_string(horaFinal)+ ":" + to_string(minutosFinal);
                matriz[i][5]= to_string(minutosInvertidos);
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
                    cout << "        " << matriz[i][5] << " " ;
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
                        cout << "    " << matriz[i][5] << endl;
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

            if (!Encontrada) // <<< Encontrada = False
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
    while(option != 5);   // Repetir hasta que elija salir (opci�n 5)

    return 0 ;
}

