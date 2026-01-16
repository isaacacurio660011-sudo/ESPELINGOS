// ESPELINGOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>   // Librería para entrada y salida de datos
using namespace std;  // Permite usar cout y cin sin std::

int main() {
    int opcion;       // Variable para guardar la opción seleccionada por el usuario
    int correctas = 0; // Contador de respuestas correctas

    // Mensaje inicial del programa
    cout << "Seleccione la traducción correcta (Español → Inglés)\n\n";

    // ===================== PALABRA 1 =====================
    cout << "1) Algoritmo\n";
    cout << "1. Algorithm\n";
    cout << "2. Program\n";
    cout << "3. Security\n";
    cout << "4. Data\n";
    cout << "Seleccione una opción: ";
    cin >> opcion; // Lee la opción del usuario

    // Verifica si la respuesta es correcta
    if (opcion == 1) {
        cout << "¡Muy bien! Excelente respuesta.\n\n";
        correctas++; // Aumenta el contador si es correcta
    } else {
        cout << "Respuesta incorrecta. Sigue intentando.\n\n";
    }

    // ===================== PALABRA 2 =====================
    cout << "2) Abstracción\n";
    cout << "1. Function\n";
    cout << "2. Abstraction\n";
    cout << "3. Variable\n";
    cout << "4. Code\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    // Evaluación de la respuesta
    if (opcion == 2) {
        cout << "¡Excelente! Vas por buen camino.\n\n";
        correctas++;
    } else {
        cout << "Incorrecto, pero no te rindas.\n\n";
    }

    // ===================== PALABRA 3 =====================
    cout << "3) Seguridad\n";
    cout << "1. Network\n";
    cout << "2. Password\n";
    cout << "3. Security\n";
    cout << "4. System\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    // Condición para validar la respuesta
    if (opcion == 3) {
        cout << "¡Correcto! Sigue así.\n\n";
        correctas++;
    } else {
        cout << "No es correcto, intenta la siguiente.\n\n";
    }

    // ===================== PALABRA 4 =====================
    cout << "4) Programa\n";
    cout << "1. File\n";
    cout << "2. Software\n";
    cout << "3. Application\n";
    cout << "4. Program\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    // Comparación de la opción ingresada
    if (opcion == 4) {
        cout << "¡Muy bien! Lo lograste.\n\n";
        correctas++;
    } else {
        cout << "Respuesta incorrecta, pero sigue practicando.\n\n";
    }

    // Muestra el resultado final
    cout << "Resultado final: " << correctas << " de 4 respuestas correctas.\n";

    // Mensaje según el desempeño del usuario
    if (correctas == 4) {
        cout << "¡Excelente trabajo! Dominaste todos los conceptos.\n";
    } else if (correctas >= 2) {
        cout << "¡Buen intento! Vas avanzando muy bien.\n";
    } else {
        cout << "No te preocupes, la práctica te hará mejorar.\n";
    }

    return 0; // Fin del programa
}
