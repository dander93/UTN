#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dado un tri�ngulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda seg�n sea: equil�tero, is�sceles o esc�lenos.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    int l1,l2,l3;

    cout << "Programa que determina que tipo de tri�ngulo forman tres medidas ingresadas." << endl << endl;

    cout << "Ingrese la primera medida: ";
    cin >> l1;
    cout << "Ingrese la segunda medida: ";
    cin >> l2;
    cout << "Ingrese la �ltima medida: ";
    cin >> l3;

    if( ( (l1+l2) > l3) && ( (l1+l3) > l2) && ( (l2+l3) > l1) ) {
        if( (l1 == l2) && ( l2 == l3 ) ){
            cout << "El tri�ngulo es equil�tero.";
        }else if( (l1 == l2) || (l1 == l3) || (l2 == l3) ){
            cout << "El tri�ngulo es is�sceles.";
        }else{
            cout << "El tri�ngulo es escaleno.";
        }
    } else {
        cout << "No es un tri�ngulo.";
    }

    cout << endl <<"Presione una tecla para salir...";
    getche();
    return 0;
}
