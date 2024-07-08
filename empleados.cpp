#include <iostream>
using namespace std;

struct EMP{
	int numero;
	string nombre;
	float ventas [12];
	float salario;
	
};
int main(){
	EMP EMPLEADO[50];
	int n;
	cout<< "Ingrese la cantidad de empleados: " ;
	cin>> n;
	for ( int i=1 ; i<=n ; i++ ){
		cout<<"Ingrese el numero del empleado "<<"#"<<i<<" : ";
		cin>>EMPLEADO[i].numero;
		cout<<"Ingrese el nombre del empleado "<<"#"<<i<<" : ";
		cin.ignore();
		getline(cin, EMPLEADO[i].nombre);
		for ( int j=1 ; j<=12 ; j++ ){
			cout<<"Ingrese las ventas del mes "<<j<<" : ";
			cin >> EMPLEADO[i] . ventas[j];
		}
		cin >> EMPLEADO [i] . salario;
	}
	int maxVenA = 0;
	int pos = 0;
	for (int i=1; i<=n; i++){
		
	}
}