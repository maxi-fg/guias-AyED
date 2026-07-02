/*Desarrolle una función a la que, pasándole una fecha como 3 parámetros enteros devuelva si la
misma es válida o no. Para ser válidad debe cumplir que el mes está entre 1 y 12, el año es
mayor o igual a 1800 y el día que sea correcto según el mes, tomando en cuenta que febrero no
tiene siempre la misma cantidad*/

#include <iostream>
using namespace std;

bool esBisiesto (int y) {
    return (y % 4 == 0) && (y % 100 != 0) || (y / 400 == 0);
}

int f(int d, int m, int y){
    if (y >= 1800 && (m >= 1 || m <=12)){
        
    }
}

int main (){

}