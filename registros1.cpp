//REGISTROS 01
//Alison Khiara Flores Hallasi
#include <iostream>
using namespace std;
struct empleado{
	string nombre;
	string sexo;
	float sueldo;
};
int main(){
	empleado emp[100];
	int n, nEm=0, k;
	int s=0, my=0;
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
	
	for (int j=1; j<=n; j++){
		s = emp[j].sueldo;
		if (s>my){
			my = s;
			k++;
		}	
	}
	cout<<" "<<endl;
	cout<<"----------DATOS DEL EMPLEADO CON MAYOR SUELDO --------"<<endl;
	cout<<" "<<endl;
	cout<<"El mayor sueldo lo tiene el empleado "<<k<<endl;
	cout<<"Nombre del empleado: "<<emp[k].nombre<<endl;
	cout<<"Sexo del empleado: "<<emp[k].sexo<<endl;
	cout<<"Sueldo del empleado: "<<emp[k].sueldo<<endl;
	cout<<" "<<endl;
	
	
	cout<<"DATOS DE LOS EMPLEADOS: "<<endl;
	for (int j=1; j<=n; j++){
		cout<<"Nombre del empleado "<<j<<" : "<<emp[j].nombre<<endl;
		
		cout<<"Sexo del empleado "<<j<<" : "<<emp[j].sexo<<endl;
		
		cout<<"Sueldo del empleado "<<j<<" : "<<emp[j].sueldo<<endl;
	}


}
