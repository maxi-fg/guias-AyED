/*Ingresar 3 valores enteros, escribirlos primero en el orden que fueron ingresados y luego
mostrarlos ordenardos en forma creciente.*/

#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Ingrese 3 numeros : " <<endl;
    cin >> num1 >> num2 >> num3;

    cout << "━━━━━-☾Orden en el que fueron ingresado☽-━━━━━" << endl;
    cout << num1 << " " << num2 << " " << num3 <<endl;
    cout << "━━━━━-☾Orden de forma creciente☽-━━━━━" << endl;
    if( num1 > num2){
        if ( num2 > num3){
            cout << num1 << " " << num2 << " " << num3 <<endl;
        }else{
            cout << num1 << " " << num3 << " " << num2 <<endl;
        }
    }else if (num2 > num1){
        if (num1 > num3){
            cout << num2 << " " << num1 << " " << num3 <<endl;
        }
        else{
            cout << num2 << " " << num3 << " " << num1 <<endl;
        }
    }else if (num3 > num1){
        if (num1 > num2){
            cout << num3 << " " << num1 << " " << num2 <<endl;
        }else{
            cout << num3 << " " << num2 << " " << num1 <<endl;
        }
    }else {
        cout << "Los 3 numeros son iguales: " << num1 << endl;
    }
    return 0;
}