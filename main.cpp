/*
 Universidad Estatal a Distancia.
 Estudiante: Jimena Velásquez Gómez.
 Asignatura: Introducción a la Programación.
 Proyecto #1.
 Temas 1 y 2.
 El siguiente programa se realiza con la intención de hacer un registro de tareas por parte del usuario.
 Primeramente, el usuario ingresará a un menú donde tendrá que elegir una de las siguientes opciones: 1. Agregar tareas, 2. Buscar tareas,
 3. Mostrar todas las tareas, 4. Eliminar tareas y 5. Salir del programa.
 La primera opción hara que el usuario ingrese los datos correspondientes (cantidad de tareas, el código, fecha de vencimiento, hora de inicio y hora final).
 La segunda opción se buscará la tarea. La tercera opción mostrará la o las tareas registradas por el usuario. La cuarta opción se eliminará la o las tareas que el usuario desee y,
finalmente, la quinta opción le permitirá al usuario salir del programa.
Recursos utilizados:
https://www.youtube.com/channel/UC7QoKU6bj1QbXQuNIjan82Q
https://www.youtube.com/watch?v=W0LwcyOxu2M
 */

#include <iostream>
#include <iomanip>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <conio.h>


using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int option;
    int ingTarea=0;

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

        cout << "Por favor digite un número del 1 al 5: ";
        cin >> option;

        if (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n');
        }
        cout << endl;
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

                if (cin.fail())
                {
                    cin.clear();
                    while (cin.get() != '\n');
                }

                if (Tareas <1 || Tareas>5)
                {
                    cout << " Opción inválida, vuelva a intentarlo " << endl;

                }

            }
            while(Tareas <1 || Tareas>5);

            for (int i=0; i < Tareas; i++ )

            {

                // Código.

                int codigo;

                do
                {
                    cout << "Código de la tarea (4 dígitos): ";
                    if (!(cin >> codigo))
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                        cout << "Opción inválida, vuelva a intentarlo" << endl;
                    }
                    if (codigo < 1000 || codigo > 9999)
                    {
                        cout << "El código debe de tener como máximo 4 dígitos" << endl ;
                    }
                }
                while (codigo < 1000 || codigo > 9999);

                //Nombre de la tarea.

                string nombreDescriptivo;

                cin.ignore();

                do
                {
                    cout << "Nombre de la tarea: ";
                    getline(cin,nombreDescriptivo);

                    if (nombreDescriptivo.empty())
                    {
                        cout << "No debe quedar el campo vacío" << endl;
                    }
                }
                while (nombreDescriptivo.empty());

                //Fecha de vencimiento.

                int dd, mm, aaaa;
                char slach1,slach2;
                bool esValida;
                do
                {

                    cout << "Fecha de vencimiento (dd/mm/aaaa):";
                    cin >> dd >> slach1 >> mm >> slach2 >> aaaa;

                    if (cin.fail())
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }

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
                    if (aaaa < 1950 || aaaa > 2025)
                    {
                        esValida = false;
                    }

                    if (!esValida)
                    {
                        cout << "Debe escribir la fecha en formato válido: dd/mm/aaaa" << endl;
                    }
                }
                while(!esValida);

                // Cálculo hora de inicio.

                int horaInicio, minutosInicio;
                char dosPuntos1;
                bool tiempoInicio;
                do
                {
                    cout << "Hora de inicio (hh:mm):";
                    cin >> horaInicio >> dosPuntos1 >> minutosInicio;

                    if (cin.fail())
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }

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

                //Cálculo hora de finalización.

                int horaFinal, minutosFinal;
                char dosPuntos2;
                bool tiempoFinal;
                do
                {
                    cout << "Hora de finalización (hh:mm):";
                    cin >> horaFinal >> dosPuntos2 >> minutosFinal;
                    if (cin.fail())
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }

                    tiempoFinal=true;

                    if(horaFinal!= '2')
                    {
                        esValida=false;
                    }

                    if (horaFinal < 0 || horaFinal >23)
                    {
                        tiempoFinal=false;
                    }
                    if(dosPuntos2!=':')
                    {
                        tiempoFinal=false;
                    }
                    if(minutosFinal!= '2')
                    {
                        esValida=false;
                    }
                    if (minutosFinal < 0 || minutosFinal >59)
                    {
                        tiempoFinal=false;
                    }

                    if(!tiempoFinal)
                    {
                        cout << "Debe escribir la hora de finalización en el formato: hh:mm " << endl;
                    }
                }
                while(!tiempoFinal);

                // Conversión minutos invertidos.

                int totalMinInicio = horaInicio * 60 + minutosInicio;
                int totalMinFinal = horaFinal * 60 + minutosFinal;
                int minutosInvertidos;

                if(totalMinFinal >= totalMinInicio)
                {
                    minutosInvertidos= totalMinFinal-totalMinInicio;

                }

                // Asignar Matriz

                // codigo - nombre - fecha - hora inicio - hora fin - Minutos Invertidos.

                matriz[i][0]= to_string(codigo);
                matriz[i][1]= nombreDescriptivo;
                matriz[i][2]= to_string(dd) + "/" + to_string(mm) + "/" + to_string(aaaa);
                matriz[i][3]= to_string(horaInicio)+ ":" + to_string(minutosInicio);
                matriz[i][4]= to_string(horaFinal)+ ":" + to_string(minutosFinal);
                matriz[i][5]= to_string(minutosInvertidos);

                ingTarea++;
            }
            getch();
            cout << endl;
            break;
        }
        case 2:
        {

            if(ingTarea==0)
            {
                cout << "Debe ingresar primero la tarea" << endl;
                getch();
                cout << endl;
                break;
            }

            // Buscar código.

            string Buscar;
            bool Encontrada = false ;

            cout << "Digite el código de la tarea que desea buscar." << endl;
            cin >> Buscar;

            for (int i = 0; i < 5; i++)
            {
                if (matriz[i][0]==Buscar)
                {
                    Encontrada = true;

                    cout << "Tarea encontrada" << endl;

                    cout << "+--------------+----------------+-----------------------+-----------------------" << endl;

                    cout << "     Código         Nombre           Fecha Vencimiento     Minutos Invertidos" << endl;

                    cout << "+--------------+----------------+-----------------------+-----------------------" << endl;


                    cout << "     " << matriz[i][0] ;
                    cout << "           " << matriz[i][1] ;
                    cout << "               " << matriz[i][2] ;
                    cout << "                 " << matriz[i][5] << " " ;
                    cout << endl;
                    break;
                }
            }
            cout << endl;

            if ( !Encontrada)
            {
                cout << "Tarea no encontrada";
            }

            getch();
            break;
        }


        case 3:
        {
            if(ingTarea==0)
            {
                cout << "Debe ingresar primero la tarea" << endl;
                getch();
                cout << endl;
                break;
            }

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
                cout << "No hay tareas registradas" << endl;
            }

            else
            {
                cout << "Mostrar tareas registradas" << endl;

                cout << "+--------------+-----------------+-----------------------------+--------------------------" << endl;

                cout << "     Código          Nombre            Fecha Vencimiento           Minutos Invertidos" << endl;

                cout << "+--------------+-----------------+-----------------------------+--------------------------" << endl;

                for (int i = 0; i < 5; i++)
                {
                    if(matriz[i][0] != "")
                    {
                        cout << "    " << matriz[i][0];
                        cout << "           " << matriz[i][1];
                        cout << "               " << matriz[i][2];
                        cout << "                   " << matriz[i][5] << endl;

                        getch();
                        cout << endl;
                        break;
                    }
                }
            }

        }

        case 4:
        {
            if(ingTarea==0)
            {
                cout << "Debe ingresar primero la tarea" << endl;
                getch();
                cout << endl;
                break;
            }

            string TareaEliminar;
            bool Encontrada = false;

            cout << "Digite el código de la tarea que desea eliminar" << endl;
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
                cout << "Tarea no registrada con ese código" << endl;
            }
            getch();
            cout << endl;
            break;
        }


        case 5:
            cout << "Salir del programa";
            break;

        default:
            cout << "Opción no válida" << endl;
        }

    }
    while(option != 5);   // Repetir hasta que elija salir (opción 5)
    getch();
    return 0 ;
}

