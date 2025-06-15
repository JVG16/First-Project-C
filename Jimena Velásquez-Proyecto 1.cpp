/*
 Universidad Estatal a Distancia.
 Estudiante: Jimena Vel�squez G�mez.
 Asignatura: Introducci�n a la Programaci�n.
 Proyecto #1.
 Temas 1 y 2.
 El siguiente programa se realiza con la intenci�n de hacer un registro de tareas por parte del usuario.
 Primeramente, el usuario ingresar� a un men� donde tendr� que elegir una de las siguientes opciones: 1. Agregar tareas, 2. Buscar tareas,
 3. Mostrar todas las tareas, 4. Eliminar tareas y 5. Salir del programa.
 La primera opci�n har� que el usuario ingrese los datos correspondientes (cantidad de tareas, el c�digo, fecha de vencimiento, hora de inicio y hora final).
 La segunda opci�n se buscar� la tarea. La tercera opci�n mostrar� la o las tareas registradas por el usuario. La cuarta opci�n se eliminar� la o las tareas que el usuario desee y,
finalmente, la quinta opci�n le permitir� al usuario salir del programa.

Referencias:
-Sesi�n Virtual 1 2do Cuatrimestre 2025 UNED. Tutor: Alexander Angelini M. Recuperado de: https://m.youtube.com/watch?v=W0LwcyOxu2M
-Canal youtube programaci�n c++ ATS https://www.youtube.com/channel/UC7QoKU6bj1QbXQuNIjan82Q
- V�ctor Galleho, YouTube, https://m.youtube.com/watch?v=aW7c7r9ErCg&t=185s&pp=2AG5AZACAQ%3D%3D

 */

#include <iostream> // Entrada y salida de datos.
#include <iomanip> // Matriz
#include <locale.h> // Formato del trabajo con tildes y �.
#include <string> // Cadenas
#include <conio.h> // Salir


using namespace std;



int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int option;
    int ingTarea=0;


    // C�digo - Nombre - Fecha - Hora inicio - Hora fin - Minutos Invertidos.

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

        cout << "Por favor digite un n�mero del 1 al 5: ";
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
                    cout << " Opci�n inv�lida, vuelva a intentarlo " << endl;

                }

            }
            while(Tareas <1 || Tareas>5);

            for (int i=0; i < Tareas && ingTarea < 5; i++ )

            {

                // C�digo.

                int codigo;

                do
                {
                    cout << "C�digo de la tarea (4 d�gitos): ";
                    if (!(cin >> codigo))
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                        cout << "Opci�n inv�lida, vuelva a intentarlo" << endl;
                    }
                    if (codigo < 1000 || codigo > 9999)
                    {
                        cout << "El c�digo debe de tener como m�ximo 4 d�gitos" << endl ;

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
                        cout << "No debe quedar el campo vac�o" << endl;
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
                        cout << "Debe escribir la fecha en formato v�lido: dd/mm/aaaa" << endl;
                    }
                }
                while(!esValida);

                // C�lculo hora de inicio.

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

                // C�lculo hora de finalizaci�n.

                int horaFinal, minutosFinal;
                char dosPuntos2;
                bool tiempoFinal;
                do
                {
                    cout << "Hora de finalizaci�n (hh:mm):";
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

                }

                // Asignar Matriz

                // C�digo - Nombre - Fecha - Hora inicio - Hora fin - Minutos Invertidos.

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
                    cout << "�Desea regresar al men� principal? (S/N):";
                    cin >> reg;
                    if (reg != 'S' && reg != 'N')
                    {
                        cout << "Opci�n no v�lida, vuelva a intentarlo." << endl;
                    }
                }
                while (reg != 'S' && reg != 'N');

                if (reg=='S')
                {
                    cout << "Regresar al men� principal." << endl;
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

            // Buscar c�digo.

            string Buscar;
            bool Encontrada = false ;

            cout << "Digite el c�digo de la tarea que desea buscar: ";
            cin >> Buscar;

            for (int i = 0; i < 5; i++)
            {
                if (matriz[i][0]==Buscar)
                {
                    Encontrada = true;

                    cout << "Tarea encontrada" << endl;

                    cout << "+--------------+----------------+-----------------------+-----------------------" << endl;

                    cout << "     C�digo         Nombre           Fecha Vencimiento     Minutos Invertidos" << endl;

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

                cout << "     C�digo          Nombre              Fecha Vencimiento            Minutos Invertidos" << endl;

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

            cout << "Digite el c�digo de la tarea que desea eliminar: ";
            cin >> TareaEliminar;

            for (int i = 0; i < 5; i++)
            {
                if (matriz[i][0] == TareaEliminar)
                {
                    Encontrada = true;

                    do
                    {
                        cout << "�Est� seguro de que desea eliminar la tarea \"" << matriz[i][1] << "\" ? (S/N): ";
                        cin >> conf;

                        if (conf != 'S' && conf != 'N')
                        {
                            cout << "Opci�n no v�lida." << endl;
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
                cout << "Tarea no registrada con ese c�digo" << endl;
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
            cout << "Opci�n no v�lida" << endl;
        }

    }
    while(option != 5);   // Repetir hasta que el usuario digite la opci�n 5.
    getch();
    return 0 ;
}

