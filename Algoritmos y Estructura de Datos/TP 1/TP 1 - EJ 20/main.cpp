#include <iostream>
#include <locale.h>
#include <conio.h>


using namespace std;

/*
*   consigna:
*           Dados 10 valores informar el mayor.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables
    int i=0,mayor,valor;

    cout << "Programa que muestra el mayor de 10 valores." << endl << endl;

    for(i=0; i<9; i++) {
        cout <<"Ingrese el valor Nº " << i+1 << ": ";
        cin >> valor;

        if((i==0)||(valor>mayor)) {
            mayor=valor;
        }
    }

    cout << "El mayor valor ingresado es: " << mayor << "." << endl;

    cout << endl << endl << "Presione una tecla para salir...";
    return 0;
}
