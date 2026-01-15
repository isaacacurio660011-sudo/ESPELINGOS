// ESPELINGOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

int main() {
    int opcion;
    int correctas = 0;

    cout << "Seleccione la traducción correcta (Español → Inglés)\n\n";

    // PALABRA 1
    cout << "1) Algoritmo\n";
    cout << "1. Algorithm\n";
    cout << "2. Program\n";
    cout << "3. Security\n";
    cout << "4. Data\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "¡Muy bien! Excelente respuesta.\n\n";
        correctas++;
    } else {
        cout << "Respuesta incorrecta. Sigue intentando.\n\n";
    }

    // PALABRA 2
    cout << "2) Abstracción\n";
    cout << "1. Function\n";
    cout << "2. Abstraction\n";
    cout << "3. Variable\n";
    cout << "4. Code\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    if (opcion == 2) {
        cout << "¡Excelente! Vas por buen camino.\n\n";
        correctas++;
    } else {
        cout << "Incorrecto, pero no te rindas.\n\n";
    }

    // PALABRA 3
    cout << "3) Seguridad\n";
    cout << "1. Network\n";
    cout << "2. Password\n";
    cout << "3. Security\n";
    cout << "4. System\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    if (opcion == 3) {
        cout << "¡Correcto! Sigue así.\n\n";
        correctas++;
    } else {
        cout << "No es correcto, intenta la siguiente.\n\n";
    }

    // PALABRA 4
    cout << "4) Programa\n";
    cout << "1. File\n";
    cout << "2. Software\n";
    cout << "3. Application\n";
    cout << "4. Program\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    if (opcion == 4) {
        cout << "¡Muy bien! Lo lograste.\n\n";
        correctas++;
    } else {
        cout << "Respuesta incorrecta, pero sigue practicando.\n\n";
    }

    cout << "Resultado final: " << correctas << " de 4 respuestas correctas.\n";

    if (correctas == 4) {
        cout << "¡Excelente trabajo! Dominaste todos los conceptos.\n";
    } else if (correctas >= 2) {
        cout << "¡Buen intento! Vas avanzando muy bien.\n";
    } else {
        cout << "No te preocupes, la práctica te hará mejorar.\n";
    }

    return 0;
}