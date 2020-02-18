// pralecu2grado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "bibliotecaecu2grado.h"
using namespace std;

//variables globales
double a, b, c;
double x1, x2;
int numSols;

void pedirCoeficientes(double& oa, double& ob, double& oc );
void resultados(int numSols, double x1, double x2);

int main()
{
	pedirCoeficientes(a, b, c);

	numSols=calcular(a, b, c, x1, x2);

	resultados(numSols, x1, x2);

}
void pedirCoeficientes(double& oa, double& ob, double& oc ) {
	setlocale(LC_ALL, "");
	cout << "introduzca el valor del coeficiente A= ";
	cin >> oa;

	cout << "introduzca el valor del coeficiente B= ";
	cin >> ob;

	cout << "introduzca el valor del coeficiente C= ";
	cin >> oc;

}

void resultados(int inumSols, double ix1, double ix2) {
	if (inumSols == 0) {

		cout << "el numero de soluciones es:" << inumSols << endl;
	}

	else if (inumSols == 1) {
		cout << "el numero de soluciones es:" << inumSols <<endl;
		cout << "la solucion para x1 es:" << ix1 << endl;
	}

	else if (inumSols == 2) {
		cout << "el numero de soluciones es:" << inumSols << endl;
		cout << "la solucion para x1 es:" << ix1 << endl;
		cout << "la solucion para x2 es:" << ix2 << endl;
	}
}




//cout << "el valor de la solucion a es:" << x1 << endl;

/*
cout << "el valor del coeficiente a es:" << a << endl;
cout << "el valor del coeficiente a es:" << b << endl;
cout << "el valor del coeficiente a es:" << c << endl;
*/




// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
