//Menu Leccion
//5 opciones: ingreso de datos, mostrar datos, ejericio1, ejercicio2, salir ademas una interfaz agradable

#include <iostream>
using namespace std;

void menuPrincipal();
void menuUsuario();

int main() {
    int opcion;

    do {
        menuPrincipal();
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "\nIniciando sesion...\n";
                menuUsuario();
                break;

            case 2:
                cout << "\nRegistrando nuevo usuario...\n";
                break;

            case 3:
                cout << "\nSaliendo de ESPELINGO. Hasta pronto 🦉\n";
                break;

            default:
                cout << "\nOpcion invalida. Intente de nuevo.\n";
        }

    } while(opcion != 3);

    return 0;
}

void menuPrincipal() {
    cout << "\n==============================\n";
    cout << "        ESPELINGO 🦉\n";
    cout << " Aprende ingles jugando\n";
    cout << "==============================\n";
    cout << "1. Iniciar sesion\n";
    cout << "2. Registrarse\n";
    cout << "3. Salir\n";
    cout << "Seleccione una opcion: ";
}

void menuUsuario() {
    int op;
    do {
        cout << "\n------ MENU DEL ESTUDIANTE ------\n";
        cout << "1. Jugar\n";
        cout << "2. Ver progreso\n";
        cout << "3. Ranking\n";
        cout << "4. Configuracion\n";
        cout << "5. Cerrar sesion\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch(op) {
            case 1:
                cout << "Entrando al juego...\n";
                break;
            case 2:
                cout << "Mostrando progreso...\n";
                break;
            case 3:
                cout << "Mostrando ranking...\n";
                break;
            case 4:
                cout << "Configuracion del usuario...\n";
                break;
            case 5:
                cout << "Sesion cerrada.\n";
                break;
            default:
                cout << "Opcion invalida.\n";
        }
    } while(op != 5);
}

