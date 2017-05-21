#include <iostream>
#include <locale.h> // por las tildes y caracteres del español.

using namespace std;

/*
*   consigna:
*           Dada una serie de M pares {color, número} que corresponden a los tiros de una ruleta. Se pide informar:
*               a) cuántas veces salió el número cero y el número anterior a cada cero
*               b) cuántas veces seguidas llegó a repetirse el color negro
*               c) cuántas veces seguidas llegó a repetirse el mismo número y cuál fue
*               d) el mayor número de veces seguidas que salieron alternados el rojo y el negro
*               e) el mayor número de veces seguidas que se negó la segunda docenas
*/
/*
*   Nota:
*
*/
int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables



    cout << endl << endl << "Presione una tecla para salir...";
    cin.get();
    return 0;
}
