#include <iostream>
#include <locale.h> // por las tildes y caracteres del espa�ol.

using namespace std;

/*
*   consigna:
*           Se dispone de un lote de valores enteros positivos que finaliza con un n�mero
*           negativo.
*           El lote est� dividido en sublotes por medio de valores cero. Desarrollar un programa que
*           determine e informe:
*                a) por cada sublote el promedio de valores
*                b) el total de sublotes procesados
*                c) el valor m�ximo del conjunto, indicando en que sublote se encontr� y la posici�n
*                    relativa del mismo dentro del sublote
*                d) valor m�nimo de cada sublote
*           Nota: el lote puede estar vac�o (primer valor negativo), o puede haber uno, varios o todos los
*           sublotes vac�os (ceros consecutivos)
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    //variables
    int valor=0,sublotes=0,promedio=0,contador=0,vmaximo,lmaximo=0,pmaximo=0,vminimo;


    cout << "Programa que divide un lote de numeros en sublotes e informa: " << endl;
    cout << "\t a. Por cada sublote el promedio de valores." << endl;
    cout << "\t b. El total de sublotes procesados." << endl;
    cout << "\t c. El valor m�ximo del conjunto, indicando en que sublote se encontr� y la posici�n relativa del mismo dentro del sublote." << endl;
    cout << "\t d. Valor m�nimo de cada sublote" << endl << endl;

    cout << "Ingresar el lote de n�meros, se separan los lotes por medio de 0. Finaliza ingresando un valor negativo." << endl << endl;

    do{ // ingreso valores

        cout << "Ingrese un valor: ";
        cin >> valor;

        if(valor == 0){
            cout << "se ingreso un 0. Fin de lote." << endl;

            cout << "El promedio de este sublote fue: " << (float)(promedio/contador) << endl;
            cout << "El valor minimo del sublote fue: " << vminimo << endl;
            sublotes++;
            promedio = 0;
            contador = 0;

        }else if(valor > 0){// si el valor es positivo acumulo valores y cuento y obtengo el valor m�ximo.

            if( (valor > vmaximo) || ( (sublotes == 0) && (contador==0) ) ){
                vmaximo = valor; // el valor maximo
                lmaximo = sublotes;//el lote en el que se encuentra el valor maximo
                pmaximo = contador;//la posici�n dentro del sublote
            }

            if ( (valor < vminimo) || (contador == 0) ){
                vminimo = valor;//minimo del sublote
            }
                contador++;
                promedio += valor;
        }else if(valor < 0){ // Si el valor ingresado es negativo env�o un mensaje y salgo del ciclo.
            cout << endl <<"Se ingreso un valor negativo, el proceso de ingreso de valores ha finalizado." << endl;
            break;
        }
    }while (valor >= 0);

    cout << endl << "###########################" << endl;
    cout <<"INFORME" << endl;
    cout << "###########################" << endl << endl;
    cout << "El valor m�ximo ingresado fue: " << vmaximo << ", en el sublote: " << lmaximo+1 << ", en la posici�n: " << pmaximo << endl;
    cout << "La cantidad de sublotes procesados fue: " << sublotes << endl;


    cout << endl << endl << "Presione una tecla para salir...";
    cin.get();
    return 0;
}
