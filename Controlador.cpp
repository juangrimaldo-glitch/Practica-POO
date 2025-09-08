#include "Controlador.h"
#include <iostream>
#include <string>
using namespace std;

void Controlador::mostrarFormulario() {
    string respuestas[5];

    cout << "Formulario 1: ¿Cuál es tu nombre? ";
    getline(cin, respuestas[0]);

    cout << "Formulario 2: ¿Cuál es tu color favorito? ";
    getline(cin, respuestas[1]);

    cout << "Formulario 3: ¿En qué ciudad vives? ";
    getline(cin, respuestas[2]);

    cout << "Formulario 4: ¿Cuál es tu comida favorita? ";
    getline(cin, respuestas[3]);

    cout << "Formulario 5: ¿Cuál es tu pasatiempo preferido? ";
    getline(cin, respuestas[4]);

    cout << "\nResumen de tus respuestas:" << endl;
    cout << "1. Nombre: " << respuestas[0] << endl;
    cout << "2. Color favorito: " << respuestas[1] << endl;
    cout << "3. Ciudad: " << respuestas[2] << endl;
    cout << "4. Comida favorita: " << respuestas[3] << endl;
    cout << "5. Pasatiempo: " << respuestas[4] << endl;

    backend.guardarRespuestas(respuestas);
}
