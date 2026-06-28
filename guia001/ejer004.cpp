/*Ingresar dos valores enteros, el primero corresponde a la cantidad de bultos en stock y el
segundo a la cantidad de bultos que se pueden colocar en una caja. Calcule cuantas cajas
completas se pueden llenar con los bultos disponibles y cuantos bultos sueltos quedarían.*/

#include <iostream>
using namespace std;

int main(){
    int stock, stockCaja, cant_cajas, resto;
    cout << "Ingrese la cantidad de Stock : ";
    cin >> stock;
    cout << "Ingrese la cantidad de Stock que puede haber por caja: ";
    cin >> stockCaja;
    cant_cajas = stock / stockCaja;
    resto = stock % stockCaja;
    cout << "La cantidad de bultos por caja es de: " << cant_cajas << " y el resto es de " << resto <<endl;

    return 0;
}