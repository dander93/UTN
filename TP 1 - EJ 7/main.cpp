#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dado tres valores determinar e imprimir una leyenda según sea: “Forman triangulo” o “No forman triangulo”.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    int l1,l2,l3;

    cout << "Programa que determina si tres medidas ingresadas pueden formar un triangulo." << endl << endl;

    cout << "Ingrese la primera medida: ";
    cin >> l1;
    cout << "Ingrese la segunda medida: ";
    cin >> l2;
    cout << "Ingrese la última medida: ";
    cin >> l3;

    if( ( (l1+l2) > l3) && ((l1+l3) > l2) && ( (l2+l3) > l1) ) {
        cout << "Forman triangulo";
    } else {
        cout << "No forman triangulo";
    }

    cout << endl <<"Presione una tecla para salir...";
    getche();
    return 0;
}
