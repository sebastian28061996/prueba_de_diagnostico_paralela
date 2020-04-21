#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    string cadena, resultado, caracteragregado;
    int i, j, afir, k, cont;
    cout << "Ejercicio n1" << endl;
    cout <<"Ingrese una cadena de caracteres: ";
    cin >> cadena;
    int largo;
    largo = cadena.length();
    cout <<largo;
    for(i=0; i<largo; i++){
        cont = 0;
        afir = 0;
        for(j=0; j<caracteragregado.length(); j++){
            if(cadena[i] == caracteragregado[j])
            {
                afir=1;
            }
        }
        if(afir==0){
            cont++;
            for(k=i+1; k<largo; k++){
                if(cadena[i]==cadena[k]){
                    cont++;
                }
            }
            caracteragregado = caracteragregado + cadena[i];
            resultado = resultado + cadena[i] + char(cont);
        }

    }
    cout<<resultado<<endl;

}
