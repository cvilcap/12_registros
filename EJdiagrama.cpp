#include <iostream>
#include <string>
using namespace std;
struct datos{
    int ID;
    string nombre;
    float sueldo;
    int ventas[12];
};
int main(){
    int n;
    cout<<"Ingrese el numero de empleados: ";
    cin>>n;
    cin.ignore();
    datos empleados[9999];
    for(int i=0; i<n; i++){
        cout<<"Ingrese el nombre del empleado "<<i+1<<": ";
        getline(cin, empleados[i].nombre);
        cout<<"Ingrese el sueldo del empleado "<<i+1<<": ";
        cin>>empleados[i].sueldo;
        for (int j=0; j<12; j++){
            cout<<"Ingrese las ventas "<<j+1<<" del empleado "<<i+1<< ": ";
            cin>>empleados[i].ventas[j];
        }
        cin.ignore();
    }
    int SV[999];
    for (int i=0; i<n;i++){
        SV[i]=0;
        for (int j=0; j<12; j++){
            SV[i]+=empleados[i].ventas[j];
        }
    }
    int max = 0;
    for (int i=0; i<n; i++){
        if (SV[i]>SV[max]){
            max=i;
        }
    }
    for(int i=0; i<n;i++){
        if(SV[i]>100){
            empleados[i].sueldo=empleados[i].sueldo*1.1;
        }
    }
    cout<<"El empleado con mayores ventas es: "<<max+1<<" - "<<empleados[max].nombre<<endl;
    return 0;
}