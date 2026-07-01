#include <iostream>
#include <string>
using namespace std;
struct Persona{
    string nombre;
    int dia;
    int mes;
    int anio;
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
        cout<<"Ingrese el nombre de la persona "<<i+1<<": ";
        getline(cin, personas[i].nombre);
        cout<<"Ingrese el dia de nacimiento de la persona "<<i+1<<": ";
        cin>>personas[i].dia;
        do{
            cout<<"Ingrese el mes de nacimiento de la persona "<<i+1<<": ";
            cin>>personas[i].mes;
            if(personas[i].mes<1 || personas[i].mes>12){
                cout<<"Mes invalido. Ingrese un mes entre 1 y 12.\n";
            }
        }while(personas[i].mes<1 || personas[i].mes>12);
        cout<<"Ingrese el año de nacimiento de la persona "<<i+1<<": ";
        cin>>personas[i].anio;
        cin.ignore();
    }
    int mesBuscado;
    do{
        cout<<"\nIngrese un numero de mes para buscar (0 para salir): ";
        cin>>mesBuscado;
        if(mesBuscado==0){
            break;
        }
        bool encontrado=false;
        if(mesBuscado>=1 && mesBuscado<=12){
            cout<<"\nPersonas que cumplen años en el mes "<<mesBuscado<<":\n";
            for(int i=0; i<n; i++){
                if(personas[i].mes==mesBuscado){
                    encontrado=true;
                    cout<<"Nombre: "<<personas[i].nombre<<"\n";
                    cout<<"Fecha de nacimiento: "<<personas[i].dia<<"/"<<personas[i].mes<<"/"<<personas[i].anio<<"\n";
                }
            }
        }else{
            cout<<"Mes invalido. Ingrese un mes entre 1 y 12.\n";
        }
        if(mesBuscado>=1 && mesBuscado<=12 && !encontrado){
            cout<<"No hay personas que cumplan años en ese mes.\n";
        }
    }
    while(true);
    return 0;
}