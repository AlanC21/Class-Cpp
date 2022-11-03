#ifndef zoo_h
#define zoo_h
#include <string>
#include <iostream>

using namespace std;

class CZooAnimal {
	private: 
		int IdAnimal;
		string name;
		int cageNumber;
		int IdTypeAnimal;
		float weight;
	public: 
		CZooAnimal(string n, int type, int cage, int w);
		CZooAnimal();
		~CZooAnimal();
		string getName();
		int getCage();
		int getType();
		float getWeight();
		bool VerificarCantidadMenor3kg();
		bool VerificarFelinos();
		bool VerificarCantidadMenor120kg();
};

CZooAnimal::CZooAnimal(string n, int type, int cage, int w){
	name = n;
	cageNumber = cage;
	IdTypeAnimal = type;
	weight = w;
}

CZooAnimal::~CZooAnimal(){
	cout<<"Borrando datos"<<endl;
}

CZooAnimal::CZooAnimal(){
	
}

string CZooAnimal::getName(){
	return name;
}

int CZooAnimal::getCage(){
	return cageNumber;
}

int CZooAnimal::getType(){
	return IdTypeAnimal;
}

float CZooAnimal::getWeight(){
	return weight;
}

bool CZooAnimal::VerificarCantidadMenor3kg(){
	return (cageNumber == 5 && weight <= 3) ? true : false;
}

bool CZooAnimal::VerificarFelinos(){
	return (cageNumber >= 2 && cageNumber <= 5 && IdTypeAnimal == 1) ? true : false;
}

bool CZooAnimal::VerificarCantidadMenor120kg(){
	return (cageNumber == 4 && weight <= 120) ? true : false;
}
#endif
