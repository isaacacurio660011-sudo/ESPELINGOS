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