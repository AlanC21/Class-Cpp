#include <iostream>
#include "CEmpleado.h"

using namespace std;

void showData(CEmpleado *empleado) {
	for(int i = 0; i < 3; i++) {
		cout << "\t.:Empleado " << i+1 << ":.\n\n";
		cout << "Nombre: " << empleado[i].getNombre() << "\n";
		cout << "Categoria: " << empleado[i].getCategoria() << "\n";
		cout << "Antiguedad: " << empleado[i].getAntiguedad() << "\n";
		cout << "Idioma: " << empleado[i].getIdioma() << "\n";
		cout << "Hijos con guarderia: " << empleado[i].getHijos() << "\n";
		cout << "Presentismo: " << empleado[i].getPresentismo() << "\n";
		cout << "Funcion: " << empleado[i].getFuncion() << "\n";
		cout << "Kms por movilidad propia: " << empleado[i].getKms() << "\n";
		cout << "Objetivo: " << empleado[i].getNombre() << "\n";
		cout << "Sueldo bruto: " << empleado[i].calcularSueldoBruto() << "\n";
		cout << "Retenciones: " << empleado[i].calcularRetencion() << "\n";
		cout << "Sueldo neto: " << empleado[i].calcularSueldoNeto() << "\n\n";
	}
}

int main() {
	
	CEmpleado *empleado = new CEmpleado[3];
	
	empleado[0] = CEmpleado("Alvarado Lucas", "B.11 - Semi-Sr", 5, "Ingles", 2, "Si", "Coordinador de grupo", 250, true);
	empleado[1] = CEmpleado("Artigas Juan Luis", "B.10 - Junior", 2, "Ingles", 0, "Si", 100, 7500, false);
	empleado[2] = CEmpleado("Casas Kevin", "B.2 - Senior", 20, "Ingles", 1, "Si", "Lider de equipo", 350, true);

	showData(empleado);

	delete []empleado;

	return 0;
}
