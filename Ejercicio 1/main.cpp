#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    string cadena, resultado, caracteragregado; //cadena el cual se ingresa, resultado final, caracteres o letras ya tomadas
    int i, j, afir, k, cont;
    cout << "Ejercicio n1" << endl;
    cout <<"Ingrese una cadena de caracteres: ";
    cin >> cadena;
    int largo;
    largo = cadena.length(); //Se adquiere el largo de la cadena ingresada
    cout <<largo;
    for(i=0; i<largo; i++){ //Se recorre la cadena desde posición 0 a largo-1
        cont = 0;
        afir = 0;
        for(j=0; j<caracteragregado.length(); j++){ //Para verificar si se ha tomado la letra o no
            if(cadena[i] == caracteragregado[j]) //Para evitar que se repita las letras ya contadas
            {
                afir=1; //Se identifica la letra que ya se habia contado
            }
        }
        if(afir==0){ //En caso de que la letra no se haya tomado y contado en la cadena
            cont++;
            for(k=i+1; k<largo; k++){
                if(cadena[i]==cadena[k]){ //Se verifica si hay letras en la cadena identicas
                    cont++;
                }
            }
            caracteragregado = caracteragregado + cadena[i]; //Letras ya contadas
            resultado = resultado + cadena[i] + char(cont); // Cadena resultado final + letra contada + contador de letra
        }

    }
    cout<<resultado<<endl; //resultado final (ejemplo: a2b5p7)

}
