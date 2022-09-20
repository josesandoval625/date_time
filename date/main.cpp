#include"Cproyecto.h"

using namespace std;

int main()
{
	cout << "hello world" << endl; 
	//---- probando la clase proyecto
	Cjefe* jefe_1 = nullptr;
	Cproyecto* proyecto_1=new Cproyecto("instalacion de software para tomografo.","xxxaaa");
	cout << proyecto_1->getNombre() << endl;
	cout<< proyecto_1->getIdeDelProyecto()<<endl;
	cout << proyecto_1->getEstadoDeProyecto() << endl;
	cout << proyecto_1->getEtapaDeProyecto() << endl;
	cout << proyecto_1->getJefe() << endl;
	cout << proyecto_1->getCantidadDeEntregas()<< endl;
	proyecto_1->imprimirEstadoDelProyecto();
	proyecto_1->imprimirEtapaDelProyecto();
	proyecto_1->EstablecerFechaDeInicioDeProyecto(1, 2, 3);
	proyecto_1->EstablecerFechaDeFinDeProyecto(4, 5, 6);
	proyecto_1->ImprimirFechaDeInicioDeProyecto();
	proyecto_1->ImprimirerFechaDeFinDeProyecto();
	proyecto_1->EstablecerNombreDelProyecto("hola mundo.");
	proyecto_1->ImprimirNombreDelProyecto();
	//------------- probando la clase Cjefe
	return 0;
}

















































//#include<iostream>
//#include<ctime>
//using namespace std;
//void funcion(tm fecha);
//int main()
//{
//	cout << "hello world" << endl;
//	tm fecha;
//	fecha.tm_year = 2022;
//	fecha.tm_mon = 9;
//	fecha.tm_mday = 21;
//	funcion(fecha);
//	return 0;
//}
//void funcion(tm fecha)
//{
//	cout << "year: " << fecha.tm_year << endl;
//	cout << "month: " << fecha.tm_mon << endl;
//	cout << "day: " << fecha.tm_mday << endl;
//
//}


















/*
//--------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;
int main() {
	// current date/time based on current system

	time_t now = time(0);
	cout << "Number of sec since January 1,1970 is:: " << now << endl;

	tm* ltm = localtime(&now);

	//print various components of tm structure.
	cout << "Year:" << 1900 + ltm->tm_year << endl;
	cout << "Month: " << 1 + ltm->tm_mon << endl;
	cout << "Day: " << ltm->tm_mday << endl;
	cout << "Time: " << 5 + ltm->tm_hour << ":";
	cout << 30 + ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;
	cout << "-------------------------------------" << endl;
	tm fechaDeNacimiento;
	fechaDeNacimiento.tm_year = 2023;
	cout << "Year:" << fechaDeNacimiento.tm_year << endl;

}
*/











