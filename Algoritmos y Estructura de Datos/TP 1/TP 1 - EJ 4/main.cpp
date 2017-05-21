#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            A partir de un valor entero ingresado por teclado, se pide informar:
*               a) La quinta parte de dicho valor
*               b) El resto de la división por 5
*               c) La séptima parte del resultado del punto a)
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    int valor;

    cout << "Programa que realiza operaciones ( la quinta parte, el resto de división por 5 y la séptima parte de la quinta parte calculada previamente ) a partir de un numero ingresado." << endl << endl;

    cout << "Ingrese un valor: ";
    cin >> valor;

    cout << "La quinta parte del número es: " << (float)(valor/5) << endl << "El resto de la división por 5 con ese número es: " << (valor%5) << endl << "Y la séptima parte del resultado de la quinta parte es: " << (float)(valor/5)/7 << endl;

    cout << endl << "presione una tecla para salir...";

    getche();
    return 0;
}
