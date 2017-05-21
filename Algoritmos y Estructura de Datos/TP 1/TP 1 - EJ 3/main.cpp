#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dada un numero entero de la forma (AAAAMMDD), que representa una fecha valida mostrar el d�a, mes y a�o que representa.
*/

int main() {

    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    int fecha,aaaa,mm,dd;

    cout << "Programa que descompone la fecha ingresada en formato de 8 digitos (aaaammdd)  en a�o, mes y dia." << endl << endl;

    cout << "Ingrese la fecha en formato de 8 digitos: ";
    cin >> fecha;

    aaaa = fecha / 10000;
    mm = (fecha - (aaaa * 10000))/100;
    dd = ((fecha - (aaaa*10000)) - (mm*100));

    cout << "El a�o de la fecha ingresada es: " << aaaa << endl;
    cout << "EL mes de la fecha ingresada es: " << mm << endl;
    cout << "EL d�a de la fecha ingresada es: " << dd << endl;

    cout << "Presione una tecla para salir...";
    getche();
    return 0;
}
