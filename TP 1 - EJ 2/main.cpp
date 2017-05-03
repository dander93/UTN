#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dada una terna de números naturales que representan al día, al mes y al año de una determinada fecha
*            informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).
*/

int main() {

    //para poder utilizar tildes u caracteres especiales
    setlocale (LC_ALL, "spanish");

    int aaaa,mm,dd,fecha;

    cout << "Programa que compone a un formato de 8 números (aaaammdd) la fecha ingresada." << endl << endl;

    cout << "ingrese el año: ";
    cin >> aaaa;
    cout << "ingrese el mes: ";
    cin >> mm;
    cout << "ingrese el día: ";
    cin >> dd;

    fecha = dd + (mm*100) + (aaaa*10000);

    cout << "la fecha es: "<< fecha << " en formato de 8 dígitos." << endl;

    cout << "Presione una tecla para salir...";
    getche();

    return 0;
}
