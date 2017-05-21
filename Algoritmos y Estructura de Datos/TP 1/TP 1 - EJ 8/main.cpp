#include <iostream>
#include <locale>
#include <conio.h>

using namespace std;

/*
*   consigna:
*            Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea: equilátero, isósceles o escálenos.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    int l1,l2,l3;

    cout << "Programa que determina que tipo de triángulo forman tres medidas ingresadas." << endl << endl;

    cout << "Ingrese la primera medida: ";
    cin >> l1;
    cout << "Ingrese la segunda medida: ";
    cin >> l2;
    cout << "Ingrese la última medida: ";
    cin >> l3;

    if( ( (l1+l2) > l3) && ( (l1+l3) > l2) && ( (l2+l3) > l1) ) {
        if( (l1 == l2) && ( l2 == l3 ) ){
            cout << "El triángulo es equilátero.";
        }else if( (l1 == l2) || (l1 == l3) || (l2 == l3) ){
            cout << "El triángulo es isósceles.";
        }else{
            cout << "El triángulo es escaleno.";
        }
    } else {
        cout << "No es un triángulo.";
    }

    cout << endl <<"Presione una tecla para salir...";
    getche();
    return 0;
}
