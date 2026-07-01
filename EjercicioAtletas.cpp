#include <iostream>
#include <string>
using namespace std;
struct Atleta{
    string nombres;
    string pais;
    string disciplina;
    int medallas;
};
int main(){
    int n;
    Atleta atletas[100];

    cout<<"Ingrese el numero de atletas: ";
    cin>>n;
    cin.ignore();
    if(n<=0){
        cout<<"No hay atletas para registrar.\n";
        return 0;
    }
    for(int i=0; i<n; i++){
        cout<<"Ingrese los nombres del atleta "<<i+1<<": ";
        getline(cin, atletas[i].nombres);
        cout<<"Ingrese el país del atleta "<<i+1<<": ";
        getline(cin, atletas[i].pais);
        cout<<"Ingrese la disciplina del atleta "<<i+1<<": ";
        getline(cin, atletas[i].disciplina);
        cout<<"Ingrese el numero de medallas del atleta "<<i+1<<": ";
        cin>>atletas[i].medallas;
        cin.ignore();
    }
    string paisBuscado;
    cout<<"\nIngrese el nombre del país para buscar: ";
    getline(cin, paisBuscado);

    int indiceMayor=0;
    bool encontrado=false;
    cout<<"\nAtletas del país "<<paisBuscado<<":\n";
    for(int i=0; i<n; i++){
        if(atletas[i].pais==paisBuscado){
            encontrado=true;
            cout<<"Nombre: "<<atletas[i].nombres<<"\n";
            cout<<"Disciplina: "<<atletas[i].disciplina<<"\n";
            cout<<"Medallas: "<<atletas[i].medallas<<"\n\n";
            if(atletas[i].medallas>atletas[indiceMayor].medallas){
                indiceMayor=i;
            }
        }
    }
    if(encontrado){
        cout<<"Atleta con mayor numero de medallas del país "<<paisBuscado<<":\n";
        cout<<"Nombre: "<<atletas[indiceMayor].nombres<<"\n";
        cout<<"País: "<<atletas[indiceMayor].pais<<"\n";
        cout<<"Disciplina: "<<atletas[indiceMayor].disciplina<<"\n";
        cout<<"Medallas: "<<atletas[indiceMayor].medallas<<"\n";
    }else{
        cout<<"No hay atletas registrados para ese país.\n";
    }
    return 0;
}