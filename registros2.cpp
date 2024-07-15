//REGISTROS 2
//Alison Khiara Flores Hallasi
#include <iostream>
using namespace std;
struct persona{
	string nombre;
	int dni;
	int edad;
};
int main (){
	persona per[100];
	int n;
	cout<<"Cantidad de personas: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		cout<<"Ingrese el nombre de la persona "<<i<<" : ";
		cin>>per[i].nombre;
		cout<<"Ingrese el dni de la persona "<<i<<" : ";
		cin>>per[i].dni;
		cout<<"Ingrese la edad de la persona "<<i<<" : ";
		cin>>per[i].edad;
	}
	cout<<" "<<endl;
	cout<<"------DATOS DE CADA PERSONA------"<<endl;
	for (int j=1; j<=n; j++){
	cout<<"Nombre de persona "<<j<<" : "<<per[j].nombre<<endl;
	cout<<"DNI de persona "<<j<<" : "<<per[j].dni<<endl;
	cout<<"Edad de persona "<<j<<" : "<<per[j].edad<<endl;
		
	}
	
}
