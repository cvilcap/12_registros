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
    for(int i=0;i<n;i++){
        cout<<"Ingrese el nombre del empleado "<<i+1<<": ";
        getline(cin, empleados[i].nombre);
        cout<<"Ingrese el sexo del empleado "<<i+1<<": ";
        getline(cin, empleados[i].sexo);
        cout<<"Ingrese el sueldo del empleado "<<i+1<<": ";
        cin>>empleados[i].sueldo;
        cin.ignore();
    }
    cout<<"\nLista de empleados:\n";
    for(int i=0;i<n;i++){
        cout<<"Empleado "<<i+1<<":\n";
        cout<<"Nombre: "<<empleados[i].nombre<<"\n";
        cout<<"Sexo: "<<empleados[i].sexo<<"\n";
        cout<<"Sueldo: "<<empleados[i].sueldo<<"\n\n";
    }
    for(int i=0;i<n;i++){
        float mayor=0;
        float menor=0;
    }
}