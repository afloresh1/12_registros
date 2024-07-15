//REGISTROS 04
//Alison Khiara Flores Hallasi
#include <iostream>
using namespace std;
struct informacion{
	string nombre;
	string pais;
	string disciplina;
	int numeromedallas;
};

int main(){
	informacion informacion_atletas[80];
	int n;
	cout<<"Ingrese la cantidad de atletas olimpicos: ";
	cin>>n;
	for (int i=1; i<=n; i++){
		cout<<"Ingrese el nombre del atleta #"<<i<<" : ";
		cin>>informacion_atletas[i].nombre;
		cout<<"Ingrese el pais del atleta #"<<i<<" : ";
		cin>>informacion_atletas[i].pais;
		cout<<"Ingrese la disciplina del atleta #"<<i<<" : ";
		cin>>informacion_atletas[i].disciplina;
		cout<<"Ingrese el numero de medallas del atleta #"<<i<<" : ";
		cin>>informacion_atletas[i].numeromedallas;
	}
	
	cout<<" --------------DATOS----------------"<<endl;
	for (int j=1; j<=n; j++){
		cout<<j<<" Nombre: "<<informacion_atletas[j].nombre<<endl;
		cout<<j<<" Pais de origen : "<<informacion_atletas[j].pais<<endl;
		cout<<j<<" Disciplina : "<<informacion_atletas[j].disciplina<<endl;
		cout<<j<<" Numero de medallas : "<<informacion_atletas[j].numeromedallas<<endl;
	}
}
