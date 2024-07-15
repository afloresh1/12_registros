//REGISTROS 3
//Alison Khiara Flores Hallasi
#include <iostream>
using namespace std;
struct datos{
	string nombre;
	int dian;
	int mesn;
	int anion;
	
};

int main(){
	datos datos_personas[50];
	int n;
	int nm;
	cout<<" Ingrese la cantidad de personas: ";
	cin>>n;
	for (int i=1; i<=n; i++){
		cout<<"Ingrese el nombre de la persona: ";
		cin>>datos_personas[i].nombre;
		cout<<"Ingrese el dia de nacimiento de la persona: ";
		cin>>datos_personas[i].dian;
		cout<<"Ingrese el mes de nacimiento de la persona: ";
		cin>>datos_personas[i].mesn;
		cout<<"Ingrese el año de nacimiento de la persona: ";
		cin>>datos_personas[i].anion;
	}
	cout<<" --------------DATOS----------------"<<endl;
	for (int j=1; j<=n; j++){
		cout<<j<<" Nombre: "<<datos_personas[j].nombre<<endl;
		cout<<j<<" Dia de nacimiento : "<<datos_personas[j].dian<<endl;
		cout<<j<<" Mes de nacimiento : "<<datos_personas[j].mesn<<endl;
		cout<<j<<" Anio de nacimiento : "<<datos_personas[j].anion<<endl;
	}
}
