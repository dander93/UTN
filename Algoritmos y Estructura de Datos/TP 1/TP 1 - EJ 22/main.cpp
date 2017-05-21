#include <iostream>
#include <locale.h> // por las tildes y caracteres del espa�ol.
#include <conio.h> // por el getche.


using namespace std;

/*
*   consigna:
*           Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que
*           finaliza con un Nombre = �FIN�, informar el nombre de la persona con mayor edad y el de la
*           m�s joven.
*/

int main() {
    //para poder utilizar tildes o caracteres especiales del espa�ol
    setlocale (LC_ALL, "spanish");

    //variables
    int i=0,aaaa,aaaaMayor,aaaaMenor,j=0;
    string nombre,nombreMayor,nombreMenor;

    cout << "Programa que permite ingresar un conjunto de fechas y a�os y determina cual es el mayor conjunto y el menor conjunto." << endl << endl;

    cout << "Para terminar el proceso de ingresado de nombres y fechas ingrese como nombre \"FIN\" " << endl << endl;

    do {
        cout << "Ingrese un nombre: ";
        cin >> nombre;

        //convertimos toda la cadena en min�sculas
        for( j=0 ; j < nombre.size() ; j++ ){
            nombre[j]=tolower(nombre[j]);
        }
        //capitalizamos el nombre
        nombre[0]=toupper(nombre[0]);

        if(nombre != "Fin") {
            cout << "Ingrese un a�o en formato AAAAMMDD: ";
            cin >> aaaa;
            if( (i==0) || (aaaa < aaaaMenor) ) {
                nombreMenor = nombre;
                aaaaMenor = aaaa;
            }
            if( ( i==0 ) || (aaaa > aaaaMayor) ) {
                nombreMayor = nombre;
                aaaaMayor = aaaa;
            }
            i++;
        } else if( (i > 0) && (nombre == "Fin") ) {
            cout << endl <<"Saliendo de la secuencia de ingreso." << endl;
        }
    } while(nombre != "Fin");

    if(i==0){
        cout << endl << "El primer valor ingresado para el nombre fue \"FIN\", por lo cual se finalizo el programa." << endl;
    }else{
        cout << endl << "La persona con mayor edad ingresada fue: " << nombreMayor << ", que naci� el: " << aaaaMayor << endl;
        cout << endl << "La persona con menor edad ingresada fue: " << nombreMenor << ", que naci� el: " << aaaaMenor << endl;
    }


    cout << endl << endl << "Presione una tecla para salir...";
    getche();
    return 0;
}
