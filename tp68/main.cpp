#include <iostream>
#include "estudiantes.h"
using namespace std;


void desplegarDatos(cEstudiantes *vector, int cantP){
	cout<<"\nListado de estudiantes"<<endl<<endl;
	for(int i=0;i<cantP;i++){
	cout<<"Nombre: "<<vector[i].getNombre()<<endl;
	cout<<"Apellido: "<<vector[i].getApellido()<<endl;
	cout<<"Fecha: "<<vector[i].getDia() << "/"<<vector[i].getMes() << "/"<<vector[i].getAnio()<<endl;
	cout<<"Nota: "<<vector[i].getNotas()<<endl;
	if(vector[i].aproboEn2021()){
		if(vector[i].saberAprobado()){
			cout<<"El alumno: "<<vector[i].getNombre()<<" aprobo en 2021"<<endl<<endl;
		}
		else {
			cout<<"El alumno: "<<vector[i].getNombre()<<" desaprobo en 2021"<<endl<<endl;
		}
	}
	else {
		cout<<"El alumno: "<<vector[i].getNombre()<<" no rindio en 2021"<<endl<<endl;
	}
}	
}

int main() {
	int cantP;
	string nombre, apellido;
	int dia, mes, anio;
	float nota;

	cout << "Cantidad de estudiantes: "; cin >> cantP;
	cEstudiantes *estudiante = new cEstudiantes[cantP];
	for(int i = 0; i < cantP; i++){
		cout << i+1 << ". Nombre: "; cin >> nombre;
		cout << i+1 << ". Apellido: "; cin >> apellido;
		cout << i+1 << ". Dia: "; cin >> dia;	
		cout << i+1 << ". Mes: "; cin >> mes;
		cout << i+1 << ". Anio: "; cin >> anio;
		cout << i+1 << ". Nota: "; cin >> nota;
		estudiante[i] = cEstudiantes(nombre, apellido, dia, mes, anio, nota);
	}
	
    desplegarDatos(estudiante, cantP);

    delete []estudiante;
 
    return 0;
}

