//REGISTROS 01
//Alison Khiara Flores Hallasi
#include <iostream>
using namespace std;
struct empleado{
	string nombre;
	string sexo;
	float salario;
};
int main(){
	empleado emp[100];
	int n,nem=0, nEm=0;
	int s=0, my=0, mn=0;
	cout<<"Ingrese el numero de trabajadores: ";
	cin>>n;
	for (int i=1; i<=n; i++){
		cout<<"Ingrese el nombre del empleado "<<i<<" : ";
		cin.ignore();
		getline(cin, emp[i].nombre);
		cout<<"Ingrese el sexo del empleado "<<i<<" : ";
		cin>>emp[i].sexo;
		cout<<"Ingrese el salario del empleado "<<i<<" : ";
		cin>>emp[i].salario;	
		
	}
	
	for (int j=1; j<=n; j++){
		s = emp[j].salario;
		if (s>my){
			my = s;
			nem = j;
		}	
	}
		cout<<" "<<endl;
		cout<<"----------DATOS DEL EMPLEADO CON MAYOR SALARIO --------"<<endl;
		cout<<" "<<endl;
		cout<<"El mayor salario lo tiene el empleado "<<nem<<endl;
		cout<<"Nombre del empleado: "<<emp[nem].nombre<<endl;
		cout<<"Sexo del empleado: "<<emp[nem].sexo<<endl;
		cout<<"Salario del empleado: "<<emp[nem].salario<<endl;
		cout<<" "<<endl;
	
	mn= my;
	s=0;
	for (int k=1; k<=n; k++){
	s = emp[k].salario;
	if (mn>s){
		mn = s;
		nEm = k;
		}	
	}
	cout<<" "<<endl;
	cout<<"----------DATOS DEL EMPLEADO CON MENOR SALARIO --------"<<endl;
	cout<<" "<<endl;
	cout<<"El menor salario lo tiene el empleado "<<nEm<<endl;
	cout<<"Nombre del empleado: "<<emp[nEm].nombre<<endl;
	cout<<"Sexo del empleado: "<<emp[nEm].sexo<<endl;
	cout<<"Salario del empleado: "<<emp[nEm].salario<<endl;
	cout<<" "<<endl;
}

