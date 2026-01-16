// ESPELINGOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// =======================
// FUNCION UTIL
// =======================
string aMinusculas(string texto) {
    for (char &c : texto) {
        c = tolower(c);
    }
    return texto;
}

// =======================
// CLASE MENU
// =======================
class Menu {
public:
    void menuPrincipal() {
        cout << "\n==============================\n";
        cout << "          ESPELINGO\n";
        cout << " Aprende ingles jugando\n";
        cout << "==============================\n";
        cout << "1. Registrarse\n";
        cout << "2. Iniciar sesion\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
    }

    void menuUsuario(const string &nombre) {
        cout << "\n------ MENU DEL ESTUDIANTE ------\n";
        cout << "Usuario: " << nombre << "\n\n";
        cout << "1. Juego Ingles → Espanol\n";
        cout << "2. Juego Espanol → Ingles\n";
        cout << "3. Ver Datos\n";
        cout << "4. Cerrar sesion\n";
        cout << "Seleccione una opcion: ";
    }

    int leerOpcion(int min, int max) {
        int op;
        while (true) {
            cin >> op;
            if (cin.fail() || op < min || op > max) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Opcion invalida. Intente nuevamente: ";
            } else {
                cin.ignore();
                return op;
            }
        }
    }
};

// =======================
// CLASE USUARIO
// =======================
class Usuario {
private:
    string nombre, carrera, universidad;
    int edad, anio;
    bool registrado;

public:
    Usuario() {
        registrado = false;
        edad = anio = 0;
    }

    void registrar() {
        cout << "\n--- REGISTRO DE USUARIO ---\n";
        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Edad: ";
        cin >> edad;
        cin.ignore();

        cout << "Universidad: ";
        getline(cin, universidad);

        cout << "Carrera: ";
        getline(cin, carrera);

        cout << "Anio que cursa: ";
        cin >> anio;
        cin.ignore();

        registrado = true;
        cout << "\nRegistro exitoso.\n";
    }

    bool estaRegistrado() const {
        return registrado;
    }

    string getNombre() const {
        return nombre;
    }

    void mostrarProgreso() const {
        cout << "\n--- DATOS DEL ESTUDIANTE ---\n";
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Universidad: " << universidad << endl;
        cout << "Carrera: " << carrera << endl;
        cout << "Anio: " << anio << endl;
    }
};

// =======================
// JUEGO INGLES → ESPAÑOL
// =======================
class JuegoInglesEspanol {
public:
    void ejecutar() {
        string ingles[] = {"Hello", "Goodbye", "Please", "Thank you", "Water"};
        string espanol[] = {"Hola", "Adios", "Por favor", "Gracias", "Agua"};
        string respuesta;
        int correctas = 0;

        cout << "\n--- INGLES → ESPAÑOL ---\n";

        for (int i = 0; i < 6; i++) {
            cout << "Traduce \"" << ingles[i] << "\": ";
            getline(cin, respuesta);

            if (aMinusculas(respuesta) == aMinusculas(espanol[i])) {
                cout << "Correcto ✓\n";
                correctas++;
            } else {
                cout << "Incorrecto ✗ (Correcta: " << espanol[i] << ")\n";
            }
        }

        cout << "\nResultado: " << correctas << " / 5\n";
    }
};

// =======================
// JUEGO ESPAÑOL → INGLES
// =======================
class JuegoEspanolIngles {
public:
    void ejecutar() {
        int opcion, correctas = 0;

        cout << "\n--- ESPAÑOL → INGLES ---\n";

        cout << "\nAlgoritmo\n1. Algorithm\n2. Program\nSeleccione: ";
        cin >> opcion;
        if (opcion == 1) correctas++;

        cout << "\nAbstraccion\n1. Variable\n2. Abstraction\nSeleccione: ";
        cin >> opcion;
        if (opcion == 2) correctas++;

        cout << "\nSeguridad\n1. Network\n2. Security\nSeleccione: ";
        cin >> opcion;
        if (opcion == 2) correctas++;

        cin.ignore();
        cout << "\nResultado final: " << correctas << " / 3\n";
    }
};

// =======================
// MAIN
// =======================
int main() {
    Menu menu;
    Usuario usuario;
    JuegoInglesEspanol juego1;
    JuegoEspanolIngles juego2;

    int opPrincipal, opUsuario;

    do {
        menu.menuPrincipal();
        opPrincipal = menu.leerOpcion(1, 3);

        if (opPrincipal == 2) {
            usuario.registrar();
        }

        if (opPrincipal == 1) {
            if (!usuario.estaRegistrado()) {
                cout << "\nDebe registrarse primero.\n";
            } else {
                do {
                    menu.menuUsuario(usuario.getNombre());
                    opUsuario = menu.leerOpcion(1, 4);

                    if (opUsuario == 1) juego1.ejecutar();
                    if (opUsuario == 2) juego2.ejecutar();
                    if (opUsuario == 3) usuario.mostrarProgreso();

                } while (opUsuario != 4);
            }
        }

    } while (opPrincipal != 3);

    cout << "\nGracias por usar ESPELINGO.\n";
    return 0;
}
