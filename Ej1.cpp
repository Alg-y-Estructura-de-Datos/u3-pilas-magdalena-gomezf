#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void funcionInvertida(Pila<char>pila){

    while (!pila.esVacia()){
        cout<< pila.pop();
    }

}
int main() {

    Pila<char> pila1;
    char caracter;
    cout << "INgrese una palabra. ingrese enter para terminar" << endl;
    while (cin.get(caracter) && caracter != '\n') {
        pila1.push(caracter);
    }
    funcionInvertida(pila1);
    return 0;
}
