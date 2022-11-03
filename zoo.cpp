#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "zoo.h"
using namespace std;

void desplegarDatos(CZooAnimal *vector, int cantA){
	for(int i = 0; i < cantA; i++){
		cout<<"Nombre: "<<vector[i].getName()<<endl;
		cout<<"Numero de jaula: "<<vector[i].getCage()<<endl;
		cout<<"Tipo de animal: "<<vector[i].getType()<<endl;
		cout<<"Peso: "<<vector[i].getWeight()<<endl;
		cout<<endl;
	}
}


void desplegarDatosAparte(CZooAnimal *vector, int cantA){
	cout << ".:Animales de la jaula 5 cuyo peso es menor a 3kg:." << endl;
	for (int i = 0; i < cantA; i++){
		if (vector[i].VerificarCantidadMenor3kg())
		{
			cout << vector[i].getName() << endl;
		}
	}
		cout << ".:Animales de la jaula 2 a 5 que son felinos:." << endl;
		for (int i = 0; i < cantA; i++){
			if (vector[i].VerificarFelinos()){
				cout << vector[i].getName() << endl;
			}
		}
		cout << ".:Animales de la jaula 4 que pesan menos de 120kg:." << endl;
		for(int i = 0; i < cantA; i++){
		if (vector[i].VerificarCantidadMenor120kg()){
			cout << vector[i].getName() << endl;
		}
	}
} 

int main() {
	int cantA, cage, type;
	string name;
	float weight;
 
	cout << "Cantidad de animales: "; cin >> cantA;
	CZooAnimal *animales = new CZooAnimal[cantA];
	for(int i = 0; i < cantA; i++) {
		fflush(stdin);
		cout << i+1 << ". Nombre: "; cin >> name;
		cout << i+1 << ". Jaula: "; cin >> cage;
		cout << i+1 << ". Tipo de animal (1 = felino, 2 = canino, 3 = ave): "; cin >> type;
		cout << i+1 << ". Peso: "; cin >> weight;
		animales[i] = CZooAnimal(name, type, cage, weight);
	}
 
	desplegarDatos(animales, cantA);
	desplegarDatosAparte(animales, cantA);

	delete []animales;
 
	return 0;
}
