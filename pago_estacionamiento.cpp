#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
de 1 a 5 horas, la hora cuesta $10
de 6 a 10 horas, la hora cuesta $9
por mas de 10 horas el costo es de $7
*/

float pago_estacionamiento(int horas)
{

	int cant(0);

	if (horas >= 0 && horas <= 5)

		cant = horas * 10;

	if (horas >= 6 && horas <= 10)

		cant = horas * 9;

	if (horas>11)

		cant = horas * 7;

	return cant;

}

bool evaluarPagoEstacionamiento(int pagoEstacionamiento, int resultadoEsperado) {

	if (pagoEstacionamiento == resultadoEsperado) {

		return true;

	}

	else {

		return false;

	}

}

void casos_de_prueba() {

	cout << "TEST CASES" << endl;
	cout << "" << endl;

	// Agrega tus casos de prueba

	cout << "- Ep" << endl;
	cout << "Text data " << "Expected result " << "Actual result " << "Pass " << endl;
	cout << "-5        " << "0               " << pago_estacionamiento(-5) << "             " << evaluarPagoEstacionamiento(pago_estacionamiento(-5), 0) << endl;
	cout << "3         " << "30              " << pago_estacionamiento(3) << "            " << evaluarPagoEstacionamiento(pago_estacionamiento(3), 30) << endl;
	cout << "8         " << "72              " << pago_estacionamiento(8) << "            " << evaluarPagoEstacionamiento(pago_estacionamiento(8), 72) << endl;
	cout << "14        " << "98              " << pago_estacionamiento(14) << "            " << evaluarPagoEstacionamiento(pago_estacionamiento(14), 98) << endl;

	cout << "" << endl;

	cout << "- BVA" << endl;
	cout << "Text data " << "Expected result " << "Actual result " << "Pass " << endl;
	cout << "-1        " << "0               " << pago_estacionamiento(-1) << "             " << evaluarPagoEstacionamiento(pago_estacionamiento(-1), 0) << endl;
	cout << "0         " << "0               " << pago_estacionamiento(0) << "             " << evaluarPagoEstacionamiento(pago_estacionamiento(0), 0) << endl;
	cout << "5         " << "50              " << pago_estacionamiento(5) << "            " << evaluarPagoEstacionamiento(pago_estacionamiento(5), 50) << endl;
	cout << "6         " << "54              " << pago_estacionamiento(6) << "            " << evaluarPagoEstacionamiento(pago_estacionamiento(6), 54) << endl;
	cout << "10        " << "90              " << pago_estacionamiento(10) << "            " << evaluarPagoEstacionamiento(pago_estacionamiento(10), 90) << endl;
	cout << "12        " << "77              " << pago_estacionamiento(12) << "            " << evaluarPagoEstacionamiento(pago_estacionamiento(12), 84) << endl;

}

int main()
{

	casos_de_prueba();

	return 0;

}