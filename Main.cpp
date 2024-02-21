#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombre,apellido,direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombre: ";
	cin>>nombre;
	cout<<"Ingresar Apellido: ";
	cin>>apellido;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//Instancia de un Objeto
	Cliente obj = Cliente(nombre,apellido,direccion,telefono,nit);
	obj.mostrar();
	
}
