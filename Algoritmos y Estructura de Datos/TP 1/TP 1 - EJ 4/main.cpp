#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            A partir de un valor entero ingresado por teclado, se pide informar:
*               a) La quinta parte de dicho valor
*               b) El resto de la divisi�n por 5
*               c) La s�ptima parte del resultado del punto a)
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    int valor;

    cout << "Programa que realiza operaciones ( la quinta parte, el resto de divisi�n por 5 y la s�ptima parte de la quinta parte calculada previamente ) a partir de un numero ingresado." << endl << endl;

    cout << "Ingrese un valor: ";
    cin >> valor;

    cout << "La quinta parte del n�mero es: " << (float)(valor/5) << endl << "El resto de la divisi�n por 5 con ese n�mero es: " << (valor%5) << endl << "Y la s�ptima parte del resultado de la quinta parte es: " << (float)(valor/5)/7 << endl;

    cout << endl << "presione una tecla para salir...";

    getche();
    return 0;
}
