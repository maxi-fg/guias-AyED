/*Desarrolle una función que calcule la sumatoria de Gauss ∑i=1 n i . Dicha función recibe como parámetro el entero hasta el que se quiere calcular.
Nota: El ejercicios tiene por objetivo practicar las iteraciones, no usar la fórmula de Gauss.*/

#include <iostream>
using namespace std;

void sumatoria(int num, int &suma){
    for (int i = 1; i <= num; i++){
        suma+=i;
    }
}

int main(){
    int num, suma;
    cout << "Ingresar un numero hasta el cual debe llegar la sumatoria: ";
    cin >> num;
    sumatoria(num, suma);
    cout << "La sumatoria total es: " << suma <<endl;
    return 0;
}