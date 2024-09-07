#include <iostream>
#include "Pila/Pila.h"
using namespace std;

Pila<int> funcionSuma(Pila<int>& pila1, int n) {
    Pila<int> aux1;
    Pila<int> aux2;
    while (!pila1.esVacia()){
        int valor=pila1.pop();
        aux1.push(valor);
    }
    // volver al orden inicial
    while (!aux1.esVacia()){
        int nuevalor=aux1.pop();
        aux2.push(nuevalor+n);
        pila1.push(nuevalor);
    }

return aux2;
}
void mostrarPila(Pila<int>& pila) {
    Pila<int> pilaAux;

    while (!pila.esVacia()) {
        int valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    cout << endl;

    // Restaurar la pila original
    while (!pilaAux.esVacia()) {
        pila.push(pilaAux.pop());
    }
}
int main() {

    Pila<int> Pila1;
    int tamanio, elemento, n;
    cout << "ingrese el tamanio de la pila" << endl;
    cin >> tamanio;

    cout << "Ingrese los " << tamanio << " numeros de la pila: ";
    for (int i = 0; i < tamanio; i++) {
        cin >> elemento;
        Pila1.push(elemento);
    };



    cout << "ingrese un numero entero " << endl;
    cin >> n;

    Pila <int>aux2= funcionSuma(Pila1, n);
    cout << "pila original: " << endl;
    mostrarPila(Pila1);

    cout << "pila sumada:" << endl;
    mostrarPila(aux2);
    return 0;
}