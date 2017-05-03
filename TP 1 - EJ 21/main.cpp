#include <iostream>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/*
*   consigna:
*           Dados N valores informar el mayor, el menor y en que posición del conjunto
*           fueron ingresados.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables
    int i, N=1,valores[N];
    string a;

    cout << "ingrese un valor: ";
    cin >> a;


    printf(%s,isdigit(a));

    //cout << isdigit(a);



    cout << endl << endl << "Presione una tecla para salir...";
    return 0;
}
