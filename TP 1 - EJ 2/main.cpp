#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dada una terna de n�meros naturales que representan al d�a, al mes y al a�o de una determinada fecha
*            informarla como un solo n�mero natural de 8 d�gitos con la forma (AAAAMMDD).
*/

int main() {

    //para poder utilizar tildes u caracteres especiales
    setlocale (LC_ALL, "spanish");

    int aaaa,mm,dd,fecha;

    cout << "Programa que compone a un formato de 8 n�meros (aaaammdd) la fecha ingresada." << endl << endl;

    cout << "ingrese el a�o: ";
    cin >> aaaa;
    cout << "ingrese el mes: ";
    cin >> mm;
    cout << "ingrese el d�a: ";
    cin >> dd;

    fecha = dd + (mm*100) + (aaaa*10000);

    cout << "la fecha es: "<< fecha << " en formato de 8 d�gitos." << endl;

    cout << "Presione una tecla para salir...";
    getche();

    return 0;
}
