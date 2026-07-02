/*Ingrese una fecha como 3 enteros para día, mes y año. Pase estos datos a una función que
devuelva un entero que represente la misma fecha pero con formato AAAAMMDD.
Variante: Ingrese los mismos datos pero de modo tal que el operador pueda ingresar en
formato fecha, es decir, algo del estilo 25/5/2019.
Nota: la variante indicada NO es importante desde el punto de vista del curso, es para quienes
quieran profundizar un poco más en las particularidades de la biblioteca estándar de C++.*/

#include <iostream>
using namespace std;

int conversion( int dia, int mes, int anio){
    return (anio * 10000) + (mes * 100) + dia;
}

int main(){
    int d, m, y;
    char slash;
    cout << "Ingresar dia, mes y anio:" <<endl;
    cin >> d >> slash >> m >> slash >> y;
    cout << conversion(d, m, y) <<endl; 
    return 0;
}