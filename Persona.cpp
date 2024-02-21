#include <iostream>
using namespace std;

class Persona{
	//Atributos
	protected : string nombre,apellido,direccion;
			int telefono;
	//Constructor	 
		Persona(){
		}
		Persona(string nom, string ap, string dir, int tel){
			nombre = nom;
			apellido = ap;
			direccion = dir;
			telefono = tel;
		}
	//Metodo
	void mostrar();
};
