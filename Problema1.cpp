#include <iostream>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

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

        system(CLEAR);
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

                    system(CLEAR);
                    cout << "De que empleado quieres cambiar el domicilio." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {

                        case 1:
                        
                            system(CLEAR);
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

                            system(CLEAR);
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

                    system(CLEAR);
                    cout << "De que empleado quieres cambiar el sueldo." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {
                        
                        case 1:
                        
                            system(CLEAR);
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

                            system(CLEAR);
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

                    system(CLEAR);
                    cout << "Declarar a quien reporta el empleado." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {
                        
                        case 1:
                            
                            system(CLEAR);
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

                            system(CLEAR);
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

                    system(CLEAR);
                    cout << "Imprimir datos de un empleado." <<endl;
                    cout<<endl;
                    cout << "1)._ Del jefe de planta." <<endl;
                    cout << "2)._ Del jefe de personal." <<endl;
                    cout << "0)._ Menu anterior." <<endl;
                    cin >> opc2;

                    switch (opc2) {
                            
                        case 1:

                            system(CLEAR);
                            cout << "JEFE DE PLANTA - DATOS" <<endl<<endl;
                            jefePlanta.imprimeDatos();
                            break;

                        case 2:

                            system(CLEAR);
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

    cout << endl << "Presiona \"ENTER\" para finalizar el programa...";
    cin.clear(); cin.sync(); cin.ignore();

    return 0;

}