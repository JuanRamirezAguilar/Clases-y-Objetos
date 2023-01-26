#include <iostream>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

using namespace std;

class Materia {
    
    private:
        
        int clave;
        string nombre;
        string profesorTit;
        string libroTexto;

    public:

        Materia() {
            clave = 0;
            nombre = profesorTit = libroTexto = "";
        }

        void setClave(int aux){
            clave = aux;
        }
        void setNombre(string aux){
            nombre = aux;
        }
        void setProfesorTit(string aux){
            profesorTit = aux;
        }
        void setLibroTexto(string aux){
            libroTexto = aux;
        }

        int getClave(){
            return clave;
        }
        string getNombre(){
            return nombre;
        }
        string getProfesorTit(){
            return profesorTit;
        }
        string getLibroTexto(){
            return libroTexto;
        }

        void imprimir() {

            cout << "Nombre de la materia: " << getNombre() << "." <<endl;
            cout << "Clave de la Materia: " << getClave() << "." <<endl;
            cout << "Nombre del Profesor: " << getProfesorTit() << "." <<endl;
            cout << "Nombre del libro de Texto: " << getLibroTexto() << "." <<endl<<endl;

            cout << "Presiona una tecla para continuar...";
            cin.clear(); cin.sync(); cin.ignore();

        }
    
};

int main () {

    Materia Programacion, BasesDatos;

    int opcMenu;

    do {

        system(CLEAR);
        cout << "Que quieres hacer?" <<endl;
        cout <<endl;

        cout << "1)._ Cambiar la clave a la materia de programacion." <<endl;
        cout << "2)._ Cambiar el nombre del maestro de base de datos." <<endl;
        cout << "3)._ Imprimir todos los datos de la materia de base de datos." <<endl;
        cout << "0) Salir." <<endl;
        cin >> opcMenu;

        int auxInt; string auxString;

        switch (opcMenu) {


            case 1:

                system(CLEAR);
                cout << "***CLAVE DE PROGRAMACION***" <<endl<<endl;
                cout << "Clave actual: " << Programacion.getClave() <<endl<<endl;
                cout << "Que clave quieres poner: " <<endl;
                cin >> auxInt;

                Programacion.setClave(auxInt);

                cout<<endl;
                cout << "Clave cambiada...";
                cin.clear();  cin.sync(); cin.ignore();
                break;

            case 2:

                system(CLEAR);
                cout << "***NOMBRE DE MAESTRO DE BASE DE DATOS***" <<endl<<endl;
                cout << "Nombre Actual: " << BasesDatos.getProfesorTit() <<endl<<endl;
                cout << "Que nombre quieres poner: " <<endl;
                fflush(stdin);
                getline(cin, auxString);

                BasesDatos.setProfesorTit(auxString);

                cout<<endl;
                cout << "Nombre cambiado...";
                cin.clear();  cin.sync(); cin.ignore();
                break;

            case 3:

                system(CLEAR);
                cout << "***DATOS DE LA MATERIA DE BASE DE DATOS***" <<endl<<endl;
                BasesDatos.imprimir();
                break;

            case 0:
                break;

            default:

                cout<<endl;
                cout << "Opcion erronea, por favor intentalo de nuevo...";
                cin.clear(); cin.sync(); cin.ignore();
                break;

        }

    } while (opcMenu != 0);

    cout << endl << "Presiona \"ENTER\" para finalizar el programa...";
    cin.clear(); cin.sync(); cin.ignore();

    return 0;

}