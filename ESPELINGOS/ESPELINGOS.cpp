// ESPELINGOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

void ingresarDatos(string &nombre, int &edad, string &carrera, int &anio, string &universidad);
void mostrarDatos(string nombre, int edad, string carrera, int anio, string universidad);

int main()
{
//Menu Leccion
//5 opciones: ingreso de datos, mostrar datos, ejericio1, ejercicio2, salir ademas una interfaz agradable

 string nombre, carrera, universidad;
    int edad, anio;

    ingresarDatos(nombre, edad, carrera, anio, universidad);
    mostrarDatos(nombre, edad, carrera, anio, universidad);

    return 0;

//Ejercicio español a ingles
//Que el programa envie una palabra en español y el usuario mande la respuesta y que se verifique si es correcta

//Ejercicio ingles a español
//Que el programa envie una palabra en ingles y el usuario mande la respuesta y que se verifique si es correcta
}

// Función para ingresar datos
void ingresarDatos(string &nombre, int &edad, string &carrera, int &anio, string &universidad)
{
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore();

    cout << "Ingrese su universidad: ";
    getline(cin, universidad);

    cout << "Ingrese su carrera: ";
    getline(cin, carrera);

    cout << "Ingrese el año que cursa: ";
    cin >> anio;
    cin.ignore();

}

// Función para mostrar datos
void mostrarDatos(string nombre, int edad, string carrera, int anio, string universidad)
{
    cout << "\n--- DATOS INGRESADOS ---\n";
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Universidad: " << universidad << endl;
    cout << "Carrera: " << carrera << endl;
    cout << "Año: " << anio << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
