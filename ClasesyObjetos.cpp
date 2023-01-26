///Problema 1:

#include <iostream>

using namespace std;

class Empleado {

    private: 

        int claveEmpleado;
        string nombre;
        string domicilio;
        float sueldo;
        string reporta;

    public:

        Empleado(){
            claveEmpleado = 0; sueldo = 0;
            nombre = domicilio = "";
        }

        void imprimeDatos() {

            cout << "Nombre del empleado: " << getnombre() <<endl;
            cout << "Clave del empleado: " << getClave() <<endl;
            cout << "Domicilio del empleado: " << getdomicilio() <<endl;
            cout << "Sueldo del empleado: " << getSueldo() <<endl;
            cout << "Supervisor del empleado: " << getReporta() <<endl<<endl;

            cout << "Presiona una tecla para continuar...";
            cin.clear(); cin.sync(); cin.ignore();

        }
        void cambiaDomicilio(string aux) {
           domicilio = aux;
        }
        void cambiaNombre(string aux) {
           nombre = aux;
        }
        void cambiaClave(int aux) {
            claveEmpleado = aux;
        }
        void cambiaSueldo(float aux){
            sueldo = aux;
        }
        void cambiaReporteA(string aux) {
            reporta = aux;
        }
        string getnombre() {
            return nombre;
        }
        int getClave(){
            return claveEmpleado;
        }
        string getdomicilio() {
            return domicilio;
        }
        float getSueldo() {
            return sueldo;
        }
        string getReporta() {
            return reporta;
        }

};


void opcErronea() {
    cout<<endl;
    cout << "Opcion erronea, por favor intentalo de nuevo...";
    cin.clear(); cin.sync(); cin.ignore();
}

int main () {

    int opc, opc2;

    Empleado jefePlanta, jefePersonal;
    jefePlanta.cambiaNombre("Juan Ramirez");
    jefePersonal.cambiaNombre("Antonio Aguilar");

    do {

        system("cls");
        cout << "Que quieres hacer?" <<endl;
        cout <<endl;

        cout << "1)._ Cambiar el domicilio de uno de los empleados." <<endl;
        cout << "2)._ Actualizar el sueldo de uno de los empleados." <<endl;
        cout << "3)._ Cambiar el nombre de la persona a quien reporta uno de los empleados." <<endl;
        cout << "4)._ Imprimir los datos de uno de los empleados." <<endl;
        cout << "0) Salir." <<endl;
        cin >> opc;

        string auxString;
        int auxCodigo;
        float auxFloat;

        switch (opc) {

            case 1:

                do {

                    system("cls");
                    cout << "De que empleado quieres cambiar el domicilio." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {

                        case 1:
                        
                            system("cls");
                            cout << "JEFE DE PLANTA - DOMICILIO Y CODIGO" <<endl<<endl;
                            cout << "Nombre del empleado: " << jefePlanta.getnombre() <<endl;
                            cout << "Codigo anterior: " << jefePlanta.getClave() <<endl;
                            jefePlanta.getdomicilio();
                            cout << "Domicilio anterior: " << jefePlanta.getdomicilio() <<endl<<endl;

                            cout << "Que codigo vas a poner?" <<endl;
                            cin >> auxCodigo;
                            cout << "Que domicilio vas a poner?" <<endl;
                            fflush(stdin);
                            getline(cin, auxString);

                            jefePlanta.cambiaDomicilio(auxString);
                            jefePlanta.cambiaClave(auxCodigo);

                            cout<<endl;
                            cout << "Datos cambiados...";
                            cin.clear();  cin.sync(); cin.ignore();
                            break;

                        case 2:

                            system("cls");
                            cout << "JEFE DE PERSONAL - DOMICILIO Y CODIGO" <<endl<<endl;
                            cout << "Nombre del empleado: " << jefePersonal.getnombre() <<endl;
                            cout << "Codigo anterior: " << jefePersonal.getClave() <<endl;
                            jefePersonal.getdomicilio();
                            cout << "Domicilio anterior: " << jefePersonal.getdomicilio() <<endl<<endl;

                            cout << "Que codigo vas a poner?" <<endl;
                            cin >> auxCodigo;
                            cout << "Que domicilio vas a poner?" <<endl;
                            fflush(stdin);
                            getline(cin, auxString);

                            jefePersonal.cambiaDomicilio(auxString);
                            jefePersonal.cambiaClave(auxCodigo);

                            cout<<endl;
                            cout << "Datos cambiados...";
                            cin.clear();  cin.sync(); cin.ignore();
                            break;
                    
                        case 0:
                            break;

                        default:
                            opcErronea();
                            break;
                    }

                    break;
                        
                } while (opc2 != 0);

                break;

            case 2:

                do {

                    system("cls");
                    cout << "De que empleado quieres cambiar el sueldo." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {
                        
                        case 1:
                        
                            system("cls");
                            cout << "JEFE DE PLANTA - SUELDO" <<endl<<endl;
                            cout << "Sueldo del empleado: " << jefePlanta.getSueldo() <<endl<<endl;

                            cout << "Que sueldo vas a poner?" <<endl;
                            cin >> auxFloat;

                            jefePlanta.cambiaSueldo(auxFloat);

                            cout<<endl;
                            cout << "Datos cambiados...";
                            cin.clear();  cin.sync(); cin.ignore();
                            break;

                        case 2:

                            system("cls");
                            cout << "JEFE DE PERSONAL - SUELDO" <<endl<<endl;
                            cout << "Sueldo del empleado: " << jefePersonal.getSueldo() <<endl<<endl;

                            cout << "Que sueldo vas a poner?" <<endl;
                            cin >> auxFloat;

                            jefePersonal.cambiaSueldo(auxFloat);

                            cout<<endl;
                            cout << "Datos cambiados...";
                            cin.clear();  cin.sync(); cin.ignore();
                            break;

                        case 0:
                            break;
                    
                        default:
                            opcErronea();
                            break;
                    }

                } while (opc2 != 0);
                break;

            case 3:

                do {

                    system("cls");
                    cout << "Declarar a quien reporta el empleado." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {
                        
                        case 1:
                            
                            system("cls");
                            cout << "JEFE DE PLANTA - A QUIEN REPORTA" <<endl<<endl;
                            if (jefePlanta.getReporta() == "") { 
                                cout << "Nombre del supervisor: " << "Aun no ingresan el nombre del supervisor." <<endl<<endl; 
                            }
                            else {
                                cout << "Nombre del supervisor: " << jefePlanta.getReporta() <<endl<<endl;
                            }

                            cout << "Que nombre vas a poner?" <<endl;
                            fflush(stdin);
                            getline(cin, auxString);

                            jefePlanta.cambiaReporteA(auxString);

                            cout<<endl;
                            cout << "Datos cambiados...";
                            cin.clear();  cin.sync(); cin.ignore();
                            break;

                        case 2:

                            system("cls");
                            cout << "JEFE DE PERSONAL - A QUIEN REPORTA" <<endl<<endl;
                            if (jefePersonal.getReporta() == "") { 
                                cout << "Nombre del supervisor: " << "Aun no ingresan el nombre del supervisor." <<endl<<endl; 
                            }
                            else {
                                cout << "Nombre del supervisor: " << jefePersonal.getReporta() <<endl<<endl;
                            }

                            cout << "Que nombre vas a poner?" <<endl;
                            fflush(stdin);
                            getline(cin, auxString);

                            jefePersonal.cambiaReporteA(auxString);

                            cout<<endl;
                            cout << "Datos cambiados...";
                            cin.clear();  cin.sync(); cin.ignore();
                            break;

                        case 0:
                            break;

                        default:
                            opcErronea();
                            break;
                    }

                } while (opc2 != 0);
                break;

            case 4:

                do {

                    system("cls");
                    cout << "Imprimir datos de un empleado." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {
                            
                        case 1:

                            system("cls");
                            cout << "JEFE DE PLANTA - DATOS" <<endl<<endl;
                            jefePlanta.imprimeDatos();
                            break;

                        case 2:

                            system("cls");
                            cout << "JEFE DE PERSONAL - DATOS" <<endl<<endl;
                            jefePersonal.imprimeDatos();
                            break;

                        case 0:
                            break;
                    
                        default:
                            opcErronea();
                            break;
                    }

                } while (opc2 != 0);

                break;

            case 0:
                break;

            default:
                opcErronea();
                break;

        }

    }while(opc != 0);

    return 0;

}


///Problema 2:

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
