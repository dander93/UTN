#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el mayor entre ellos.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    int valor1,valor2;

    cout << "Programa que determina el mayor de dos números ingresados.";

    cout << "Ingrese el primer número: ";
    cin >> valor1;

    cout << "Ingrese el segundo número: ";
    cin >> valor2;

    if(valor1 > valor2) {
        cout << "El primer número ("<< valor1 <<") es mayor que el segundo.";
    } else if(valor2 > valor1) {
        cout << "El segundo número ("<< valor2 <<") es mayor que el primero.";
    } else {
        cout << "Los números son iguales";
    }

    cout << endl << "presione una tecla para salir...";

    getche();
    return 0;
}
