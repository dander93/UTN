#include <iostream>
#include <locale.h>
#include <conio.h>


using namespace std;

/*
*   consigna:
*           Se ingresa un conjunto de valores float, cada uno de los cuales representan el
*           sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide
*           desarrollar un programa que determine e informe:
*               a) Cuántos empleados ganan menos $1.520.
*               b) Cuántos ganan $1.520 o más pero menos de $2.780.
*               c) Cuántos ganan $2.780 o más pero menos de $5.999.
*               d) Cuántos ganan $5.999 o más.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables
    int conta=0,contb=0,contc=0,contd=0;
    float sueldo;

    cout << "Programa que cuenta cuantos empleados segun cuanto ganan: " << endl;
    cout << "\t a) Cuántos empleados ganan menos $1.520." << endl;
    cout << "\t b) Cuántos ganan $1.520 o más pero menos de $2.780." << endl;
    cout << "\t c) Cuántos ganan $2.780 o más pero menos de $5.999." << endl;
    cout << "\t d) Cuántos ganan $5.999 o más." << endl << endl;

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
        cout << "Hay " << contd << " empleados que cobran más de $5999." << endl;
    } else {
        cout << "No hay empleados que cobren más de $5999." << endl;
    }


    cout << endl << endl << "Presione una tecla para salir...";
    ;
    return 0;
}
