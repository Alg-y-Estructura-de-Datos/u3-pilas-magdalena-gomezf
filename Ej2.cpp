#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void intercambio(Pila<int> & pila1, int nuevo, int viejo){
    Pila<int > aux;
    int cambio;

    while (!pila1.esVacia()){
      cambio= pila1.pop();
      aux.push(cambio);
    }
    while (!aux.esVacia()){
        cambio=aux.pop();
        if (viejo==cambio){
            pila1.push(nuevo);

        } else{
            pila1.push(cambio);
        }
    }

}
int main() {

    Pila<int> Pila1;
    int tamanio, elemento, viejo, nuevo;
    cout << "ingrese el tamanio de la pila" << endl;
cin >> tamanio;

cout << "Ingrese los " << tamanio << " numeros de la pila: ";
    for (int i = 0;  i< tamanio; i++) {
        cin >> elemento;
        Pila1.push(elemento);
    };
    cout << "ingrese el numero nuevo";
    cin >> nuevo;
    cout << "ingrese el nuemro que desea remplazar";
    cin >> viejo;

    intercambio(Pila1,nuevo, viejo);

    cout << "Pila despues del reemplazo: ";
while (!Pila1.esVacia()) {
       cout << Pila1.pop() << " ";
  }
    cout << endl;
    return 0;
}
