#include <iostream>
#include <locale.h> // por las tildes y caracteres del espa�ol.
#include <conio.h> // por el getche.


using namespace std;

/*
*   consigna:
*           Dado un conjunto de valores, que finaliza con un valor nulo, determinar e
*           imprimir (si hubo valores):
*               a) El valor m�ximo negativo
*               b) El valor m�nimo positivo
*               c) El valor m�nimo dentro del rango -17.3 y 26.9
*               d) El promedio de todos los valores.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    //variables




    cout << endl << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
