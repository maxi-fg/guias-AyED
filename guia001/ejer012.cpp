/*Ingresar un Nº cualquiera y determinar si es positivo o no. Repetir en un ciclo hasta que el nro
ingresado sea cero. Nota: utilice el operador ?:
1. Variante a: considere el cero como positivo
2. Variante b: En caso de ingresar cero no emita ningún mensaje, simplemente finalice el
programa*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "━━━━━-Variante A☽-━━━━━" << endl;
    do {
        cout << "Ingrese un numero: ";
        cin >> num;
        num >= 0 ? cout << "Es positivo\n" : cout << "Es negativo\n";
    } while (num != 0);


    cout << "━━━━━-Variante B☽-━━━━━" << endl;
    do {
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num == 0 ){
            return 0;
        }
    } while (num != 0);
    return 0;
}
