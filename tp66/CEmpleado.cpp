#include "CEmpleado.h"
#include <iostream>
#include <string>

using namespace std;

CEmpleado::CEmpleado(string nombre, string categoria, float antiguedad, string idioma, int cantHijos, string presentismo, string funcion, int kmPorMovilidadPropia, bool sindicato) {
	this->nombre = nombre;
	this->categoria = categoria;
	this->antiguedad = antiguedad;
	this->idioma = idioma;
	this->cantHijos = cantHijos;
	this->presentismo = presentismo;
	this->funcion = funcion;
	this->kmPorMovilidadPropia = kmPorMovilidadPropia;
	this->sindicato = sindicato;
}

CEmpleado::CEmpleado(string nombre, string categoria, float antiguedad, string idioma, int cantHijos, string presentismo, int kmPorMovilidadPropia, int objetivoAdicional, bool sindicato) {
	this->nombre = nombre;
	this->categoria = categoria;
	this->antiguedad = antiguedad;
	this->idioma = idioma;
	this->cantHijos = cantHijos;
	this->presentismo = presentismo;
	this->kmPorMovilidadPropia = kmPorMovilidadPropia;
	this->objetivoAdicional = objetivoAdicional;
	this->sindicato = sindicato;
}

CEmpleado::CEmpleado() {
	
}

CEmpleado::~CEmpleado() {
	
}

string CEmpleado::getNombre() {
	return nombre;
}

string CEmpleado::getCategoria() {
	return categoria;
}

string CEmpleado::getIdioma() {
	return idioma;
}

string CEmpleado::getPresentismo() {
	return presentismo;
}

string CEmpleado::getFuncion() {
	return funcion;
}

float CEmpleado::getAntiguedad() {
	return antiguedad;
}

int CEmpleado::getHijos() {
	return cantHijos;
}

int CEmpleado::getKms() {
	return kmPorMovilidadPropia;
}

int CEmpleado::getObjetivo() {
	return objetivoAdicional;
}

bool CEmpleado::getSindicato() {
	return sindicato;
}

float CEmpleado::calcularSueldoBruto() {
	char delimiter = ' ';
	float sueldoBasico = 0.0;
	string nCategoria = categoria.substr(0, categoria.find(delimiter));
	categoria = string(categoria.rbegin(), categoria.rend());
	string level = categoria.substr(0, categoria.find(delimiter));
	level = string(level.rbegin(), level.rend());
	
	if(nCategoria == "B.2") {
		if(level == "Junior") sueldoBasico = 149667.9012;
		else if(level == "Semi-Sr") sueldoBasico = 166361.316;
		else if(level == "Senior") sueldoBasico = 183560.9664;
	} else if(nCategoria == "B.10") {
		if(level == "Junior") sueldoBasico = 142021.1016;
		else if(level == "Semi-Sr") sueldoBasico = 157794.065;
		else if(level == "Senior") sueldoBasico = 174044.9536;
	} else if(nCategoria == "B.11") {
		if(level == "Junior") sueldoBasico = 139344.7212;
		else if(level == "Semi-Sr") sueldoBasico = 154795.52;
		else if(level == "Senior") sueldoBasico = 170714.3424;
	}
	
	sueldoBruto = sueldoBasico + ((sueldoBasico*antiguedad)/100);
	if(idioma != "Español") sueldoBruto += (sueldoBruto*8)/100;
	if(presentismo == "Si") sueldoBruto += (sueldoBruto*2)/100;
	if(funcion == "Coordinador de grupo") sueldoBruto += (sueldoBruto*10)/100;
	else if(funcion == "Lider de equipo") sueldoBruto += (sueldoBruto*20)/100;
	
	return sueldoBruto;
}

float CEmpleado::calcularSueldoNeto() {
	float sueldoNeto = sueldoBruto - retenciones + (kmPorMovilidadPropia*43) + (cantHijos*10000);
	return sueldoNeto;
}

float CEmpleado::calcularRetencion() {
	retenciones = ((sueldoBruto*11)/100) + ((sueldoBruto*6)/100) + ((sueldoBruto*4)/100);

	if(sindicato == true) retenciones += ((sueldoBruto*3)/100);
	 
	return retenciones;
}
