#include <iostream>
#include <locale.h> // por las tildes y caracteres del espa�ol.

using namespace std;

/*
*   consigna:
*           Dada una serie de M pares {color, n�mero} que corresponden a los tiros de una ruleta. Se pide informar:
*               a) cu�ntas veces sali� el n�mero cero y el n�mero anterior a cada cero
*               b) cu�ntas veces seguidas lleg� a repetirse el color negro
*               c) cu�ntas veces seguidas lleg� a repetirse el mismo n�mero y cu�l fue
*               d) el mayor n�mero de veces seguidas que salieron alternados el rojo y el negro
*               e) el mayor n�mero de veces seguidas que se neg� la segunda docenas
*/
/*
*   Nota:
*
*/
int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    //variables



    cout << endl << endl << "Presione una tecla para salir...";
    cin.get();
    return 0;
}
