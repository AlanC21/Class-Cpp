#ifndef CEMPLEADO_H
#define CEMPLEADO_H
#include <string>

using namespace std;

class CEmpleado {
	// Private section
	string nombre, categoria, idioma, presentismo, funcion;
	bool sindicato;
	int antiguedad, cantHijos, kmPorMovilidadPropia, objetivoAdicional;
	float sueldoBruto, retenciones;
	public:
		// Public Declarations
		CEmpleado(string,string,float,string,int,string,string,int,bool);
		CEmpleado(string,string,float,string,int,string,int,int,bool);
		CEmpleado();
		~CEmpleado();
		string getNombre(), getCategoria(), getIdioma(), getPresentismo(), getFuncion();
		bool getSindicato();
		float getAntiguedad();
		int getHijos(), getKms(), getObjetivo();
		float calcularSueldoBruto(), calcularSueldoNeto(), calcularRetencion();
};

#endif
