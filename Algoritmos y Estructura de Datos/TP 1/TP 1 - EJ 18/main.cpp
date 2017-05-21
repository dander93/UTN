#include <iostream>
#include <locale.h>
#include <conio.h>


using namespace std;

/*
*   consigna:
*           Dado un valor M determinar y emitir un listado con los M primeros múltiplos de
*           3 que no lo sean de 5, dentro del conjunto de los números naturales.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables
    int M,i=0;

    cout << "Programa que muestra los M múltiplos de 3, que no sean múltiplos de 5 al mismo tiempo dentro de los números naturales." << endl << endl;

    cout << "Ingrese el valor M: ";
    cin >> M;
    cout << endl;


    for(i=0; i <= M; i++) {
        if( ( ( ( i * 3 ) %5 ) != 0 ) || ( i == 0 ) ) {
            cout << "Múltiplo Nº " << i+1 << ": " << i*3 << endl;
        }
    }

    cout << endl << endl << "Presione una tecla para salir...";
    return 0;
}
