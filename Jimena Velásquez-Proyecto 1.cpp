/*
 Universidad Estatal a Distancia.
 Estudiante: Jimena Velásquez Gómez.
 Asignatura: Introducción a la Programación.
 Proyecto #1.
 Temas 1 y 2.
 El siguiente programa se realiza con la intención de hacer un registro de tareas por parte del usuario.
 Primeramente, el usuario ingresará a un menú donde tendrá que elegir una de las siguientes opciones: 1. Agregar tareas, 2. Buscar tareas,
 3. Mostrar todas las tareas, 4. Eliminar tareas y 5. Salir del programa.
 La primera opción hará que el usuario ingrese los datos correspondientes (cantidad de tareas, el código, fecha de vencimiento, hora de inicio y hora final).
 La segunda opción se buscará la tarea. La tercera opción mostrará la o las tareas registradas por el usuario. La cuarta opción se eliminará la o las tareas que el usuario desee y,
finalmente, la quinta opción le permitirá al usuario salir del programa.

Referencias:
-Sesión Virtual 1 2do Cuatrimestre 2025 UNED. Tutor: Alexander Angelini M. Recuperado de: https://m.youtube.com/watch?v=W0LwcyOxu2M
-Canal youtube programación c++ ATS https://www.youtube.com/channel/UC7QoKU6bj1QbXQuNIjan82Q
- Víctor Galleho, YouTube, https://m.youtube.com/watch?v=aW7c7r9ErCg&t=185s&pp=2AG5AZACAQ%3D%3D

 */

#include <iostream> // Entrada y salida de datos.
#include <iomanip> // Matriz
#include <locale.h> // Formato del trabajo con tildes y ñ.
#include <string> // Cadenas
#include <conio.h> // Salir


using namespace std;



int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int option;
    int ingTarea=0;


    // Código - Nombre - Fecha - Hora inicio - Hora fin - Minutos Invertidos.

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

            for (int i=0; i < Tareas && ingTarea < 5; i++ )

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


                // Nombre de la tarea.

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

                // Fecha de vencimiento.

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
                        esValida=false;
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
                    if (aaaa < 2025 || aaaa > 2025)
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

                // Cálculo hora de finalización.

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

                // Código - Nombre - Fecha - Hora inicio - Hora fin - Minutos Invertidos.

                matriz[ingTarea][0]= to_string(codigo);
                matriz[ingTarea][1]= nombreDescriptivo;
                matriz[ingTarea][2]= to_string(dd) + "/" + to_string(mm) + "/" + to_string(aaaa);
                matriz[ingTarea][3]= to_string(horaInicio)+ ":" + to_string(minutosInicio);
                matriz[ingTarea][4]= to_string(horaFinal)+ ":" + to_string(minutosFinal);
                matriz[ingTarea][5]= to_string(minutosInvertidos);

                ingTarea++;

                cout << "Tarea agregada exitosamente." << endl;
                char reg;

                do
                {
                    cout << "¿Desea regresar al menú principal? (S/N):";
                    cin >> reg;
                    if (reg != 'S' && reg != 'N')
                    {
                        cout << "Opción no válida, vuelva a intentarlo." << endl;
                    }
                }
                while (reg != 'S' && reg != 'N');

                if (reg=='S')
                {
                    cout << "Regresar al menú principal." << endl;
                    cout << endl;

                }
                if (reg=='N')
                {
                    if (ingTarea<Tareas)
                    {
                        cout << "Registrar otra tarea." << endl;
                        cout << endl;
                    }
                    else
                    {
                        cout << "No hay tareas por registrar." << endl;
                    }

                }
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

            cout << "Digite el código de la tarea que desea buscar: ";
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
                cout << endl;
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
                cout << endl;
            }

            else
            {
                cout << "Mostrar todas las tareas registradas" << endl;

                cout << "+--------------+--------------------+-----------------------------+--------------------------" << endl;

                cout << "     Código          Nombre              Fecha Vencimiento            Minutos Invertidos" << endl;

                cout << "+--------------+--------------------+-----------------------------+--------------------------" << endl;

                for (int i = 0; i < ingTarea; i++)
                {
                    if(matriz[i][0] != "")
                    {
                        cout << "     " << matriz[i][0];
                        cout << "            " << matriz[i][1];
                        cout << "                " << matriz[i][2];
                        cout << "                      " << matriz[i][5] << endl;

                        cout << endl;

                    }
                }
            }

        }
        break;
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
            char conf;
            bool Encontrada = false;

            cout << "Digite el código de la tarea que desea eliminar: ";
            cin >> TareaEliminar;

            for (int i = 0; i < 5; i++)
            {
                if (matriz[i][0] == TareaEliminar)
                {
                    Encontrada = true;

                    do
                    {
                        cout << "¿Está seguro de que desea eliminar la tarea \"" << matriz[i][1] << "\" ? (S/N): ";
                        cin >> conf;

                        if (conf != 'S' && conf != 'N')
                        {
                            cout << "Opción no válida." << endl;
                        }
                    }
                    while (conf != 'S' && conf != 'N');


                    if (conf=='S')
                    {
                        for (int j = 0; j < 4; j++)
                        {
                            matriz[i][j] = "";
                        }

                        cout << "Tarea eliminada correctamente." << endl;
                        break;
                    }
                    else
                    {
                        cout << "La tarea no fue eliminada." << endl;
                        break;
                    }
                }

            }

            if (!Encontrada)
            {
                cout << "Tarea no registrada con ese código" << endl;
            }
            getch();
            cout << endl;
            break;
        }

        case 5:
            cout << "Salir del programa";
            cout << endl;
            break;

        default:
            cout << "Opción no válida" << endl;
        }

    }
    while(option != 5);   // Repetir hasta que el usuario digite la opción 5.
    getch();
    return 0 ;
}

