#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "personas.h"
using namespace std;

void desplegarDatos(CPersona *vector, int cantP)
{
	cout << ".:Listado de personas:." << endl;
	for (int i = 0; i < cantP; i++)
	{
		cout << "Nombre: " << vector[i].getName() << endl;
		cout << "Genero: " << vector[i].getGender() << endl;
		cout << "Edad: " << vector[i].getAge() << endl;
		cout << "Altura: " << vector[i].getHeight() << endl;
		cout << "Nacionalidad: " << vector[i].getNation() << endl;
		cout << "Ciudad Residencia: " << vector[i].getCity() << endl << endl;
	}
}

void desplegarDatosAparte(CPersona *vector, int cantP){
	cout << ".:Personas que residen en Mar del Plata:." << endl;
	for (int i = 0; i < cantP; i++){
		if (vector[i].habitaMDP())
		{
			cout << vector[i].getName() << " reside en Mar del Plata" << endl;
		}
	}
		cout << ".:Personas que su nombre termina en 'a':." << endl;
		for (int i = 0; i < cantP; i++){
			if (vector[i].terminaEnA()){
				cout << vector[i].getName() << endl;
			}
		}
		cout << ".:Personas que tienen mas de 18 años:." << endl;
		for(int i = 0; i < cantP; i++){
		if (vector[i].mayorA18()){
			cout << vector[i].getName() << endl;
		}
	}
}

int main() {
	int cantP, edad;
	string nombre, nation, ciudadResidencia;
	char gen;
	float height;
 
	cout << "Cantidad de personas: "; cin >> cantP;
	CPersona *persona = new CPersona[cantP];
	for(int i = 0; i < cantP; i++) {
		fflush(stdin);
		cout << i+1 << ". Nombre: "; cin >> nombre;
		cout << i+1 << ". Edad: "; cin >> edad;
		do{
			cout << i+1 << ". Género(h/m): "; cin >> gen;
		}while(gen != 'h' && gen != 'm');
		cout << i+1 << ". Altura: "; cin >> height;
		cout << i+1 << ". Nacionalidad: "; cin >> nation;
		cout << i+1 << ". Ciudad de residencia: "; cin.ignore(10000, '\n');getline(cin,ciudadResidencia);
		persona[i] = CPersona(nombre, nation, ciudadResidencia, gen, edad, height);
	}
 
	desplegarDatos(persona, cantP);
	desplegarDatosAparte(persona, cantP);

	delete []persona;
 
	return 0;
}
