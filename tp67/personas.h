#ifndef personas_h
#define personas_h
#include <string>
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

class CPersona
{
public:
	CPersona(string, string, string, char, int, float);
	CPersona();
	~CPersona();
	void setPersona(string, string, string, char, int, float);
	string getName(), getNation(), getCity();
	int getGender(), getAge();
	float getHeight();
	bool habitaMDP(), terminaEnA(), mayorA18();

private:
	string nombre, nacionalidad, ciudadResidencia;
	char genero;
	int edad;
	float altura;
};

CPersona::CPersona(string name, string nat, string cityRes, char gen, int age, float height)
{
	setPersona(name, nat, cityRes, gen, age, height);
}

CPersona::CPersona()
{
}

CPersona::~CPersona()
{
}

void CPersona::setPersona(string name, string nat, string cityRes, char gen, int age, float height)
{
	nombre = name;
	nacionalidad = nat;
	ciudadResidencia = cityRes;
	genero = gen;
	edad = age;
	altura = height;
}

string CPersona::getName()
{
	return nombre;
}

string CPersona::getNation()
{
	return nacionalidad;
}

string CPersona::getCity()
{
	return ciudadResidencia;
}

int CPersona::getGender()
{
	return genero;
}

int CPersona::getAge()
{
	return edad;
}

float CPersona::getHeight()
{
	return altura;
}

bool CPersona::habitaMDP()
{
	return (ciudadResidencia == "mar del plata" || ciudadResidencia == "Mar del Plata") ? true : false;
}

bool CPersona::terminaEnA()
{
	return (nombre.back() == 'a') ? true : false;
}

bool CPersona::mayorA18(){
	return (edad >= 18) ? true : false;
}

#endif