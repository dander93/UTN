#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dadas dos fechas informar cual es la más reciente. Determine cuales serían los datos de entrada y
*            las leyendas a informar de acuerdo al proceso solicitado.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    int aaaa,mm,dd,fecha1,fecha2;

    cout << "Programa que determina la mayor de dos fechas ingresadas." << endl << endl;

    cout << "Ingrese el año de la primera fecha: ";
    cin >> aaaa;
    cout << "Ingrese el mes de la primera fecha: ";
    cin >> mm;
    cout << "Ingrese el día de la primera fecha: ";
    cin >> dd;

    fecha1 = (aaaa*10000)+(mm*100)+dd;

    cout << endl << "Ingrese el año de la segunda fecha: ";
    cin >> aaaa;
    cout << "Ingrese el mes de la segunda fecha: ";
    cin >> mm;
    cout << "Ingrese el día de la segunda fecha: ";
    cin >> dd;

    fecha2 = (aaaa*10000)+(mm*100)+dd;

    if( fecha1 > fecha2 ){
        cout << endl << "La primera fecha (" << fecha1 << ") es mayor.";
    }else if( fecha2 > fecha1 ){
        cout << endl << "La segunda fecha (" << fecha2 << ") es mayor.";
    }else{
        cout << endl << "Las fechas ingresadas son iguales.";
    }

    cout << endl <<"Presione una tecla para salir...";
    getche();
    return 0;
}
