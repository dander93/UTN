#include <iostream>
#include <locale>
#include <conio.h>


using namespace std;

/*
*   consigna:
*            Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que –10.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del español
    setlocale (LC_ALL, "spanish");
    int i=0, mayores , menores, aux,contMa=0,contMe=0;

    cout << "Programa que dados 50 números enteros informa el promedio de los mayores que 100 y la suma de los menores que -10" << endl << endl;

    for( i=0 ; i < 10 ; i++ ){
        cout << "Ingrese un valor: ";
        cin >> aux;

        if( ( aux < -10 ) && ( contMe == 0 ) ){
            contMe += 1;
            menores = aux;
        }else if(aux < -10){
            contMe += 1;
            menores += aux;
        }else if( ( aux > 100 ) && ( contMa == 0 )){
            contMa++;
            mayores = aux;
        }else if(aux>100){
            contMa++;
            mayores += aux;
        }
    }

    cout << "El promedio de los números ingresados mayores que 100 es: " << (float)( mayores / contMa ) << " y la suma de los menores que -10 es: " << menores << endl;

    cout << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
