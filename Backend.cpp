#include "Backend.h"
#include <fstream>
#include <iostream>

void Backend::guardarRespuestas(const std::string respuestas[5]) {
    std::ofstream archivo("respuestas.txt", std::ios::app);
    if (archivo.is_open()) {
        for (int i = 0; i < 5; ++i) {
            archivo << respuestas[i] << std::endl;
        }
        archivo << "-----" << std::endl;
        archivo.close();
        std::cout << "Respuestas guardadas en respuestas.txt" << std::endl;
    } else {
        std::cout << "No se pudo abrir el archivo para guardar las respuestas." << std::endl;
    }
}
