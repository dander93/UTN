#include <iostream>
#include <locale.h>
#include <conio.h>


using namespace std;

/*
*   consigna:
*            Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se tomó nota de los siguientes datos:
                - Tipo de Infracción (1, 2, 3, ó 4)
                - Motivo de la infracción
                - Valor de la multa
                - Gravedad de la infracción (‘L’,‘M’, ‘G’)
            Se pide informar al final del proceso:
                 Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
                 La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish.");

    //variables
    int infr=0,multa=0,multaL=0,multaM=0,multaG=0,clausura=0,i=0;
    string motivo;
    char grav;

    cout << "Programa que simula una inspección a una empresa e informa el resultado." << endl << endl;

    for(i=0; i<20; i++) {
        cout << "Ingrese el tipo de infracción: ";
        cin >> infr;
        cout << "Ingrese el motivo de la infracción: ";
        cin >> motivo;
        cout << "Ingrese el valor de la multa: ";
        cin >> multa;
        cout << "Ingrese la gravedad de la infracción: ";
        cin >> grav;

        if( grav == 'L' ) {
            multaL += multa;
        } else if(grav == 'M' ) {
            multaM += multa;
        } else if( grav == 'G' ) {
            multaG += multa;
        }
        if(( infr == 3) && ( grav == 'G' )) {
            clausura++;
        } else if(( infr == 4) && ( grav == 'G' )) {
            clausura++;
        }
    }
    cout << endl << endl << "*****************************************" << endl;
    cout << "INFORME" << endl;
    cout << "*****************************************" << endl;
    cout << "Multa acumulada de gravedad 'L': " << multaL << endl;
    cout << "Multa acumulada de gravedad 'M': " << multaM << endl;
    cout << "Multa acumulada de gravedad 'G': " << multaG << endl;

    if(clausura > 3){
        cout << endl << "Clausurar Fabrica" << endl;
    }
    cout << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
