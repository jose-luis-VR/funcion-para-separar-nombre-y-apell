// ejecutar nombre 
// estudiante: jose luis valdivia rojas 
// fecha: 26/01/2024
#include <iostream>
#include <string>
using namespace std;

// Función para separar el nombre completo en partes
void separarNombre(string nombreCompleto, string& nombre1, string& nombre2, string& apellidoPaterno, string& apellidoMaterno) {
	// Encontrar las posiciones de los espacios que separan nombres, apellido paterno y materno
	size_t pos1 = nombreCompleto.find(' ');
	size_t pos2 = nombreCompleto.find(' ', pos1 + 1);
	size_t pos3 = nombreCompleto.find(' ', pos2 + 1);
	
	// Extraer cada parte del nombre completo
	nombre1 = nombreCompleto.substr(0, pos1);
	nombre2 = nombreCompleto.substr(pos1 + 1, pos2 - pos1 - 1);
	apellidoPaterno = nombreCompleto.substr(pos2 + 1, pos3 - pos2 - 1);
	apellidoMaterno = nombreCompleto.substr(pos3 + 1);
}

int main(int argc, char *argv[]) {
	// Declaración de variables
	string nombreCompleto, nombre1, nombre2, apellidoPaterno, apellidoMaterno;
	
	// Solicitar al usuario que ingrese el nombre completo
	cout << "Ingrese su nombre completo (nombre1 nombre2 apellidoPaterno apellidoMaterno): ";
	getline(cin, nombreCompleto);
	
	// Llamar a la función para separar el nombre completo en partes
	separarNombre(nombreCompleto, nombre1, nombre2, apellidoPaterno, apellidoMaterno);
	
	// Imprimir cada parte por separado
	cout << "Primer Nombre: " << nombre1 << endl;
	cout << "Segundo Nombre: " << nombre2 << endl;
	cout << "Apellido Paterno: " << apellidoPaterno << endl;
	cout << "Apellido Materno: " << apellidoMaterno << endl;
	
	return 0;
}

