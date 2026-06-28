/*Ingresar un N° entero cualquiera en base 10 y determinar cuantas cifras tiene en base 16.
Nota: bien hecho es una leve variante del problema anterior.*/

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
            n = n / 16;
            contador++;
        }
    }
    cout << "El " << num << " tiene " << contador << " cifras en base 16."<<endl;
    return 0;
}