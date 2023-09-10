#include <bits/stdc++.h>
using namespace std;

class CEmpleado{
	private:
		string Nombre;
		int Anio;
		float Salario;
		string Direccion;
	public:
		CEmpleado(string nombre, int anio, float salario, string direccion);
		
		string GetNombre(string nombre);
		int GetAnio(int anio);
		float GetSalario(float salario);
		string GetDireccion(string direccion);
		
		int CalcularAniosAntiguedad();
		bool ViveEnWallStreet();		
};

CEmpleado::CEmpleado(string nombre, int anio, float salario, string direccion){
	Nombre = GetNombre(nombre);
	Anio = GetAnio(anio);
	Salario = GetSalario(salario);
	Direccion = GetDireccion(direccion);
}

string CEmpleado::GetNombre(string nombre){
	Nombre = nombre;
	return Nombre;
}

int CEmpleado::GetAnio(int anio){
	Anio = anio;
	return Anio;
}

float CEmpleado::GetSalario(float salario){
	Salario = salario;
	return Salario;
}

string CEmpleado::GetDireccion(string direccion){
	Direccion = direccion;
	return Direccion;
}

int CEmpleado::CalcularAniosAntiguedad(){
	int antiguedad = 2023 - Anio;
	return antiguedad;
}

bool CEmpleado::ViveEnWallStreet(){
	if(Direccion == "WallStreet" || Direccion == "Wall Street"){
		return true;
	} else {
		return false;
	}
}

int main(){
	string NOMBRE,DIRECCION;
	int ANIO;
	float SALARIO;
	
	cout<<"Ingrese Nombre: ";
	cin>>NOMBRE;
	cout<<"Ingrese Anio de ingreso: ";
	cin>>ANIO;
	cout<<"Ingrese Salario: ";
	cin>>SALARIO;
	cin.ignore();
	cout<<"Ingrese Direccion: ";	
	getline(cin, DIRECCION);
	
	CEmpleado Empleado = CEmpleado(NOMBRE, ANIO, SALARIO, DIRECCION);
	cout<<endl<<endl;
	
	cout<<"Nombre : "<<Empleado.GetNombre(NOMBRE)<<endl;
	cout<<"Anio de ingresado : "<<Empleado.GetAnio(ANIO)<<endl;
	cout<<"Salario : "<<Empleado.GetSalario(SALARIO)<<"$"<<endl;
	cout<<"Direccion : "<<Empleado.GetDireccion(DIRECCION)<<endl<<endl;
	
	cout<<"Anios de Antiguedad : "<<Empleado.CalcularAniosAntiguedad()<<endl;
	
	if(Empleado.ViveEnWallStreet()){
		cout<<"Vive en la calle Wall Street"<<endl;
	}
	if(!Empleado.ViveEnWallStreet()) {
		cout<<"No vive en Wall Street"<<endl;
	}
	return 0;
}

