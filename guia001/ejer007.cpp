/*Leer 2 valores y mostrar el mayor de ellos, si son iguales mostrar cualquiera de los dos. */
#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Ingresar 2 numeros : " <<endl;
    cin >> num1 >> num2;
    if (num1 > num2){
        cout << num1 <<endl;
    }else if(num1 == num2){
        cout << num1 <<endl;
    }else {
        cout << num2 <<endl;
    }
    return 0;
}