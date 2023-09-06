#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    cout << "\ninicio\n";
    Fila fila;
    ItemType a;
    a = 'a';
    cout << "\nFila\n";
    fila.enqueue(a);
    fila.enqueue('1');
    fila.enqueue('9');
    cout << "\nenqueue\n";
    fila.print();
    cout << "\ndequeue: ";
    cout << " = " << fila.dequeue();
    cout << endl;
    fila.print();
    cout << "\ndequeue: ";
    cout << " = " << fila.dequeue();
    cout << endl;
    fila.print();
    cout << "\ndequeue: ";
    cout << " = " << fila.dequeue();
    cout << endl;
    fila.print();
    cout << "\nfim\n";
}