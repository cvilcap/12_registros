#include <iostream>
#include <string>
using namespace std;
struct Empleado{
    string nombre;
    string sexo;
    float sueldo;
};
int main(){
    int n;
    Empleado empleados[100];

    cout<<"Ingrese el numero de empleados: ";
    cin>>n;
    cin.ignore();
    if(n<=0){
        cout<<"No hay empleados para registrar.\n";
        return 0;
    }
    for(int i=0; i<n; i++){
        cout<<"Ingrese el nombre del empleado "<<i+1<<": ";
        getline(cin, empleados[i].nombre);
        cout<<"Ingrese el sexo del empleado "<<i+1<<": ";
        getline(cin, empleados[i].sexo);
        cout<<"Ingrese el sueldo del empleado "<<i+1<< ": ";
        cin>>empleados[i].sueldo;
        cin.ignore();
    }
    int indiceMayor = 0;
    int indiceMenor = 0;
    for (int i = 1; i < n; i++) {
        if (empleados[i].sueldo > empleados[indiceMayor].sueldo) {
            indiceMayor = i;
        }
        if (empleados[i].sueldo < empleados[indiceMenor].sueldo) {
            indiceMenor = i;
        }
    }
    cout << "\nEmpleado con mayor sueldo:\n";
    cout << "Nombre: " << empleados[indiceMayor].nombre << "\n";
    cout << "Sexo: " << empleados[indiceMayor].sexo << "\n";
    cout << "Sueldo: " << empleados[indiceMayor].sueldo << "\n\n";
    cout << "Empleado con menor sueldo:\n";
    cout << "Nombre: " << empleados[indiceMenor].nombre << "\n";
    cout << "Sexo: " << empleados[indiceMenor].sexo << "\n";
    cout << "Sueldo: " << empleados[indiceMenor].sueldo << "\n";
    return 0;
}