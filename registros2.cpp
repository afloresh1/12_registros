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
	float p, se=0;
	int j=0, pm=0;
	cout<<"Cantidad de personas: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		cout<<"Ingrese el nombre de la persona "<<i<<" : ";
		cin>>per[i].nombre;
		cout<<"Ingrese el dni de la persona "<<i<<" : ";
		cin>>per[i].dni;
		cout<<"Ingrese la edad de la persona "<<i<<" : ";
		cin>>per[i].edad;
		se = se + per[i].edad;
		pm = per[i].edad;
		if (pm>50){
			j++;
		}
	}
	p = se/n;
	cout<<"El promedio de la edad de las personas es: "<<p<<endl;
	cout<<"La cantidad de personas mayores a 50 es: "<<j<<endl;
	cout<<" "<<endl;
	
	cout<<"---------------DATOS DE LAS PERSONAS----------------"<<endl;
	for (int k=1; k<=n; k++){
		cout<<"Nombre "<<k<<" : "<<per[k].nombre<<endl;
		cout<<"DNI "<<k<<" : "<<per[k].dni<<endl;
		cout<<"Edad "<<k<<": "<<per[k].edad<<endl;
	}
	
}
