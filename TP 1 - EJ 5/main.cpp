#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cu�l es el mayor entre ellos.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    int valor1,valor2;

    cout << "Programa que determina el mayor de dos n�meros ingresados.";

    cout << "Ingrese el primer n�mero: ";
    cin >> valor1;

    cout << "Ingrese el segundo n�mero: ";
    cin >> valor2;

    if(valor1 > valor2) {
        cout << "El primer n�mero ("<< valor1 <<") es mayor que el segundo.";
    } else if(valor2 > valor1) {
        cout << "El segundo n�mero ("<< valor2 <<") es mayor que el primero.";
    } else {
        cout << "Los n�meros son iguales";
    }

    cout << endl << "presione una tecla para salir...";

    getche();
    return 0;
}
