//REGISTROS 01
//Alison Khiara Flores Hallasi
#include <iostream>
using namespace std;
struct empleado{
	string nombre;
	string sexo;
	int sueldo;
};
int main(){
	empleado emp[100];
	int n;
	cout<<"Ingrese el numero de trabajadores: ";
	cin>>n;
	for (int i=1; i<=n; i++){
		cout<<"Ingrese el nombre del empleado "<<i<<" : ";
		cin.ignore();
		getline(cin, emp[i].nombre);
		cout<<"Ingrese el sexo del empleado "<<i<<" : ";
		cin>>emp[i].sexo;
		cout<<"Ingrese el sueldo del empleado "<<i<<" : ";
		cin>>emp[i].sueldo;	
	}
	cout<<"DATOS DE LOS EMPLEADO: "<<endl;
	for (int j=1; j<=n; j++){
		cout<<"Nombre del empleado "<<j<<" : "<<emp[j].nombre<<endl;
		
		cout<<"Sexo del empleado "<<j<<" : "<<emp[j].sexo<<endl;
		
		cout<<"Sueldo del empleado "<<j<<" : "<<emp[j].sueldo<<endl;
		
	}
	
}
