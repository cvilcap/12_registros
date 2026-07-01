#include <iostream>
#include <string>
using namespace std;
struct Persona{
    string nombres;
    string DNI;
    int edad;
};
int main(){
    int n;
    Persona personas[100];

    cout<<"Ingrese el numero de personas: ";
    cin>>n;
    cin.ignore();
    if(n<=0){
        cout<<"No hay personas para registrar.\n";
        return 0;
    }
    for(int i=0; i<n; i++){
        cout<<"Ingrese los nombres de la persona "<<i+1<<": ";
        getline(cin, personas[i].nombres);
        cout<<"Ingrese el DNI de la persona "<<i+1<<": ";
        getline(cin, personas[i].DNI);
        cout<<"Ingrese la edad de la persona "<<i+1<<": ";
        cin>>personas[i].edad;
        cin.ignore();
    }
    int mayores50 = 0;
    int sumaEdades = 0;
    for(int i=0; i<n; i++){
        sumaEdades += personas[i].edad;
        if(personas[i].edad > 50){
            mayores50++;
        }
    }
    double promedio = static_cast<double>(sumaEdades) / n;
    cout<<"\nCantidad de personas mayores de 50 años: "<<mayores50<<"\n";
    cout<<"Promedio de edades: "<<promedio<<"\n\n";
    cout<<"Listado completo de personas registradas:\n";
    for(int i=0; i<n; i++){
        cout<<i+1<<". Nombres: "<<personas[i].nombres<<"\n";
        cout<<"   DNI: "<<personas[i].DNI<<"\n";
        cout<<"   Edad: "<<personas[i].edad<<"\n";
    }
    return 0;
}
