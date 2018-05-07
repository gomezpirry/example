#include "Cuenta.h"


void Cuenta::calcularNomina() {

 nomina  = 100000 * fondos;
}

Cuenta::Cuenta(float fondosIniciales) {
	fondos = fondosIniciales;
}

Cuenta::~Cuenta() {

}

void Cuenta::consignacion(float cantidad) {
	fondos += cantidad;
}

bool Cuenta::retiro(float cantidad) {

	bool permitido;
	if(fondos - cantidad < 0){
		permitido = false;
	}
	else {
		fondos -= cantidad;
		numeroTransacciones++;
		permitido = true;
	}

	return permitido;

}

float Cuenta::consultaSaldo() {
	return fondos;
}

int Cuenta::consultarTransacciones(){
	return numeroTransacciones;
}
