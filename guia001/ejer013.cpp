/*Cuenta la leyenda de la creación del ajedrez que el sabio pidió al rey como recompensa 1 grano
de arroz por el primer casillero, 2 por el segundo, 4 por el tercero, etc. Calcule el total de
granos de arroz en el tablero. Nota: la idea es armar un ciclo que acumule el arroz de cada
casillero, sin embargo por fórmula sabemos que la cantidad pedida es 264-1 por ello deberá usar
variables con sizeof de 8 para poder alojar el valor requerido en forma correcta.
Respuesta: 18446744073709551615*/

#include <iostream>
using namespace std;

int main(){
    unsigned long long total_granos = 0;
    unsigned long long granos_casillero = 1;

    for (int i = 1; i <= 64; i++){
        total_granos += granos_casillero;
        granos_casillero*=2;
    }
    cout << "El total de granos de arroz es: " << total_granos << endl;

    return 0;
}