/*Ingresar un Nº entero cualquiera y determinar cuantas cifras tiene (todo en base 10)*/

#include <iostream>
using namespace std;

int main(){
    int num, contador = 0;
    cout << "Ingrese un numero : ";
    cin >> num;
    int n = abs(num);
    if (n == 0){
        contador = 1;
    }else {
        while (n > 0) {
            n = n / 10;
            contador++;
        }
    }
    cout << "El " << num << " tiene " << contador << " cifras."<<endl;
    return 0;
}