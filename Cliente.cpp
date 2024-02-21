#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona { 
	//Atributos
	private : string nit;	
	
	//Constructor
	public :
	Cliente(){
	}
	
	Cliente(string nom,string ap,string dir,int tel, string n) : Persona(nom,ap,dir,tel){
		nit = n;
		
	}
	//Metodos
	//Set (Sirven para modificar) (Se queda en una sola linea por estetica)
	void setNit(string n){nit = n;} 
	void setNombre(string nom){nombre = nom;}
	void setApellido(string ap){apellido = ap;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	//get (sirven para mostrar) (Se queda en una sola linea por estetica)
	string getNit(){return nit;}
	string getNombre(){return nombre;}
	string getApellido(){return apellido;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	//Metodo
	void mostrar(){
		cout<<"_______________________"<<endl;
		cout<<nit<<","<<nombre<<","<<apellido<<","<<direccion<<","<<telefono<<endl;
		
	}
};
