// ESPELINGOS.cpp : Ejecicios de Espelingo Ingles a Español

#include <iostream>    // Necesario para entrada y salida
#include <string>      // Necesario para usar string
#include <cstdlib>    // Necesario para system("cls")
#include <cctype>     // Necesario para toupper()
using namespace std;

int main() {
    int numEjercicios;
    string respuesta;
    
    // Lista de palabras (inglés → español)
    string ingles[] = {"Hello", "Goodbye", "Please", "Thank you", "Sorry", 
                       "Yes", "No", "Water", "Food", "House", 
                       "Friend", "Family", "Love", "Time", "Day"};
                       
    string espanol[] = {"Hola", "Adiós", "Por favor", "Gracias", "Lo siento/Perdón", 
                        "Sí", "No", "Agua", "Comida", "Casa", 
                        "Amigo", "Familia", "Amor", "Tiempo", "Día"};
    
    const int totalPalabras = 15; // ¡Puedes agregar más palabras aquí arriba!

    cout << "======================================\n";
    cout << "   Practica de Espelingo Ingles → Español\n";
    cout << "======================================\n\n";

    cout << "Cuantos ejercicios quieres practicar? (puede elejir entre 1 a 15): ";
    cin >> numEjercicios;

    if (numEjercicios < 1) numEjercicios = 1;
    if (numEjercicios > totalPalabras) numEjercicios = totalPalabras;

    cout << "\nMuy bien practiquemos con " << numEjercicios << " ejercicios...\n\n";

    cout << "Presiona Enter para comenzar...";
    cin.get(); cin.get(); 
    system("cls");   

    int correctas = 0;

    for (int i = 0; i < numEjercicios; i++) {
        cout << "----------------------------------------\n";
        cout << "Ejercicio " << (i+1) << " de " << numEjercicios << "\n\n";
        cout << "Traduce al español:  " << ingles[i] << "\n\n";
        cout << "→ ";

        cin >> respuesta;
        // Convertir la primera letra a mayúscula para que la comparación sea mas optima
        if (respuesta.length() > 0) {
            respuesta[0] = toupper(respuesta[0]);
        }

        if (respuesta == espanol[i]) {
            cout << "\n¡Correcto! ✓\n\n";
            correctas++;
        } else {
            cout << "\nIncorrecto ✗\n";
            cout << "La respuesta correcta es: " << espanol[i] << "\n\n";
        }

        cout << "Presiona Enter para continuar...";
        cin.get(); cin.get();
        system("cls");  
    }

    // Resultado final
    cout << "\n======================================\n";
    cout << "         ¡PRACTICA FINALIZADA!\n";
    cout << "======================================\n";
    cout << "Aciertos: " << correctas << " de " << numEjercicios << "\n";
    cout << "Porcentaje: " << (correctas * 100 / numEjercicios) << "%\n\n";

    if (correctas == numEjercicios) {
        cout << "¡PERFECTO! Eres un crack :D\n";
    } else if (correctas >= numEjercicios * 0.7) {
        cout << "¡Muy bien! Vas por buen camino!\n";
    } else {
        cout << "Sigue practicando, ¡tú puedes!\n";
    }

    return 0;
}
