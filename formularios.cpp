#include <iostream>
#include <string>
using namespace std;

int main() {
	string respuesta1, respuesta2, respuesta3, respuesta4, respuesta5;

	cout << "Formulario 1: ¿Cuál es tu nombre? ";
	getline(cin, respuesta1);

	cout << "Formulario 2: ¿Cuál es tu color favorito? ";
	getline(cin, respuesta2);

	cout << "Formulario 3: ¿En qué ciudad vives? ";
	getline(cin, respuesta3);

	cout << "Formulario 4: ¿Cuál es tu comida favorita? ";
	getline(cin, respuesta4);

	cout << "Formulario 5: ¿Cuál es tu pasatiempo preferido? ";
	getline(cin, respuesta5);

	cout << "\nResumen de tus respuestas:" << endl;
	cout << "1. Nombre: " << respuesta1 << endl;
	cout << "2. Color favorito: " << respuesta2 << endl;
	cout << "3. Ciudad: " << respuesta3 << endl;
	cout << "4. Comida favorita: " << respuesta4 << endl;
	cout << "5. Pasatiempo: " << respuesta5 << endl;

	return 0;
}
