#include <iostream>
#include <locale>
#include <conio.h>
#include <ctype.h>
#include <string>
using namespace std;

/*
*   consigna:
*            Dados un mes y el año correspondiente informar cuantos días tiene el mes.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");

    //variables
    string mes,aux;
    int dd,mm,aaaa,i=0;

    cout << "Programa que determina la cantidad de días a partir de un mes y un año ingresados." << endl << endl;

    cout << "Ingrese el año: ";
    cin >> aaaa;
    cout << "Ingrese el mes: ";
    cin >> aux;


    cout << endl << endl << "************************************" << endl << endl;

    cout << "El año ingresado fue: " << aaaa << endl;

    if(isdigit(aux[0])) {

        mm = stoi(aux);

        if( mm == '1' ) {
            dd = 31;
        } else if( mm == 2) {
            if( ( (aaaa % 4) == 0 )&&( (aaaa % 100) != 0 )||( (aaaa % 400) == 0) ) {
                dd = 29;
            } else {
                dd = 28;
            }
        } else if( mm == 3 ) {
            dd = 31;
        } else if( mm == 4 ) {
            dd = 30;
        } else if ( mm == 5 ) {
            dd = 31;
        } else if ( mm == 6 ) {
            dd = 30;
        } else if( mm == 7 ) {
            dd = 31;
        } else if( mm == 8 ) {
            dd = 31;
        } else if ( mm == 9 ) {
            dd = 30;
        } else if( mm == 10 ) {
            dd = 31;
        } else if ( mm == 11 ) {
            dd = 30;
        } else if ( mm == 12 ) {
            dd = 31;
        } else {
            cout << "El mes ingresado no existe." << endl;
            i=1;
        }

        cout << "El mes ingresado fue: " << mm << endl;

    } else {

        mes = aux;

        mes[0] = toupper( mes[0] );

        for(i=1; i<mes.size(); i++) {
            mes[i]=tolower(mes[i]);
        }

        if( mes == "Enero" ) {
            dd = 31;
        } else if(mes=="Febrero") {
            if( ( (aaaa % 4) == 0 )&&( (aaaa % 100) != 0 )||( (aaaa % 400) == 0) )  {
                dd = 29;
            } else {
                dd = 28;
            }
        } else if( mes == "Marzo" ) {
            dd = 31;
        } else if( mes == "Abril") {
            dd = 30;
        } else if ( mes == "Mayo") {
            dd = 31;
        } else if ( mes == "Junio") {
            dd = 30;
        } else if( mes == "Julio") {
            dd = 31;
        } else if( mes == "Agosto") {
            dd = 31;
        } else if ( mes == "Septiembre") {
            dd = 30;
        } else if( mes == "Octubre") {
            dd = 31;
        } else if ( mes == "Noviembre") {
            dd = 30;
        } else if ( mes == "Diciembre") {
            dd = 31;
        } else {
            cout << "El mes ingresado no existe." << endl;
            i=1;
        }

        cout << "El mes ingresado fue: " << mes << endl;
    }

    if(i == 0) {
        cout << "La cantidad de días del mes es: " << dd;
    }

    cout << endl <<"Presione una tecla para salir...";
    getche();
    return 0;
}
