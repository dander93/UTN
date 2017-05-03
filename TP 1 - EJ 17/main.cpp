#include <iostream>
#include <locale.h>
#include <conio.h>


using namespace std;

/*
*   consigna:
*           Se ingresa un conjunto de valores float, cada uno de los cuales representan el
*           sueldo de un empleado, excepto el �ltimo valor que es cero e indica el fin del conjunto. Se pide
*           desarrollar un programa que determine e informe:
*               a) Cu�ntos empleados ganan menos $1.520.
*               b) Cu�ntos ganan $1.520 o m�s pero menos de $2.780.
*               c) Cu�ntos ganan $2.780 o m�s pero menos de $5.999.
*               d) Cu�ntos ganan $5.999 o m�s.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    //variables
    int conta=0,contb=0,contc=0,contd=0;
    float sueldo;

    cout << "Programa que cuenta cuantos empleados segun cuanto ganan: " << endl;
    cout << "\t a) Cu�ntos empleados ganan menos $1.520." << endl;
    cout << "\t b) Cu�ntos ganan $1.520 o m�s pero menos de $2.780." << endl;
    cout << "\t c) Cu�ntos ganan $2.780 o m�s pero menos de $5.999." << endl;
    cout << "\t d) Cu�ntos ganan $5.999 o m�s." << endl << endl;

    do {
        cout << "Ingrese sueldo: ";
        cin >> sueldo;

        if( ( sueldo > 0) && ( sueldo < 1520 ) ) {
            conta++;
        } else if( ( sueldo >= 1520 ) && ( sueldo < 2780 ) ) {
            contb++;
        } else if( ( sueldo >= 2780 ) && ( sueldo < 5999 ) ) {
            contc++;
        } else if( sueldo >= 5999 ) {
            contd++;
        }

    } while(sueldo!=0);

    cout << endl << "****  INFORME  ****" << endl;

    if(conta > 0) {
        cout << "Hay " << conta << " empleados que cobran menos de $1520." << endl;
    } else {
        cout << "No hay empleados que cobren menos de $1520" << endl;
    }

    if(contb > 0) {
        cout << "Hay " << contb << " empleados que cobran entre $1520 y $2780." << endl;
    } else {
        cout << "No hay empleados que cobren entre $1520 y $2780." << endl;
    }

    if(contc > 0 ) {
        cout << "Hay " << contc << " empleados que cobran entre $2780 y $5999." << endl;
    } else {
        cout << "No hay empleados que cobren entre $1520 y $2780." << endl;
    }

    if(contd > 0 ) {
        cout << "Hay " << contd << " empleados que cobran m�s de $5999." << endl;
    } else {
        cout << "No hay empleados que cobren m�s de $5999." << endl;
    }


    cout << endl << endl << "Presione una tecla para salir...";
    ;
    return 0;
}
