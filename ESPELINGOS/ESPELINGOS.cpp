//Menu Leccion
//5 opciones: ingreso de datos, mostrar datos, ejericio1, ejercicio2, salir ademas una interfaz agradable

#include <iostream>
#include <string>

using namespace std;

// =======================
// CLASE MENU
// =======================
class Menu {
public:
    void mostrarMenuPrincipal() {
        cout << "\n==============================\n";
        cout << "        ESPELINGO\n";
        cout << " Aprende ingles jugando\n";
        cout << "==============================\n";
        cout << "1. Iniciar sesion\n";
        cout << "2. Registrarse\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
    }

    void mostrarMenuUsuario(const string &nombre) {
        cout << "\n------ MENU DEL ESTUDIANTE ------\n";
        cout << "Usuario: " << nombre << "\n\n";
        cout << "1. Jugar Ingles → Espanol\n";
        cout << "2. Juego Seleccion Multiple\n";
        cout << "3. Ver progreso\n";
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
        nombre = "No registrado";
    }

    void registrar() {
        cout << "\n--- REGISTRO DE USUARIO ---\n";
        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Edad: ";
        cin >> edad;
        cin.ignore();

        cout << "Carrera: ";
        getline(cin, carrera);

        cout << "Anio que cursa: ";
        cin >> anio;
        cin.ignore();

        cout << "Universidad: ";
        getline(cin, universidad);

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
        cout << "\n--- PROGRESO DEL ESTUDIANTE ---\n";
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Carrera: " << carrera << endl;
        cout << "Anio: " << anio << endl;
        cout << "Universidad: " << universidad << endl;
    }
};

// =======================
// CLASE JUEGO INGLES → ESPAÑOL
// =======================
class JuegoInglesEspanol {
public:
    void ejecutar() {
        string ingles[] = {"Hello", "Water", "House"};
        string espanol[] = {"Hola", "Agua", "Casa"};
        string respuesta;
        int correctas = 0;

        cout << "\n--- JUEGO INGLES → ESPAÑOL ---\n";

        for (int i = 0; i < 3; i++) {
            cout << "Traduce \"" << ingles[i] << "\": ";
            getline(cin, respuesta);

            if (respuesta == espanol[i]) {
                cout << "Correcto.\n";
                correctas++;
            } else {
                cout << "Incorrecto. Respuesta correcta: " << espanol[i] << endl;
            }
        }

        cout << "\nResultado final: " << correctas << " / 3\n";
    }
};

// =======================
// CLASE JUEGO SELECCION MULTIPLE
// =======================
class JuegoSeleccionMultiple {
public:
    void ejecutar() {
        int opcion, correctas = 0;

        cout << "\n--- SELECCION MULTIPLE ---\n";

        cout << "\nCasa:\n1. House\n2. Dog\nSeleccione: ";
        cin >> opcion;
        if (opcion == 1) correctas++;

        cout << "\nPerro:\n1. Cat\n2. Dog\nSeleccione: ";
        cin >> opcion;
        if (opcion == 2) correctas++;

        cin.ignore();
        cout << "\nResultado: " << correctas << " / 2 correctas\n";
    }
};

// =======================
// MAIN (FLUJO PRINCIPAL)
// =======================
int main() {
    Menu menu;
    Usuario usuario;
    JuegoInglesEspanol juego1;
    JuegoSeleccionMultiple juego2;

    int opcionPrincipal, opcionUsuario;

    do {
        menu.mostrarMenuPrincipal();
        opcionPrincipal = menu.leerOpcion(1, 3);

        if (opcionPrincipal == 2) {
            usuario.registrar();
        }

        if (opcionPrincipal == 1) {
            if (!usuario.estaRegistrado()) {
                cout << "\nDebe registrarse primero.\n";
            } else {
                do {
                    menu.mostrarMenuUsuario(usuario.getNombre());
                    opcionUsuario = menu.leerOpcion(1, 4);

                    if (opcionUsuario == 1) juego1.ejecutar();
                    if (opcionUsuario == 2) juego2.ejecutar();
                    if (opcionUsuario == 3) usuario.mostrarProgreso();

                } while (opcionUsuario != 4);
            }
        }

    } while (opcionPrincipal != 3);

    cout << "\nGracias por usar ESPELINGO.\n";
    return 0;
}
