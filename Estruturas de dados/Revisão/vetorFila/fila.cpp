#include <iostream>
#include "fila.h"

using namespace std;
const int maxItem = 10;

Fila::Fila(){
    front = 0;
    rear = 0;
    structure = new ItemType[10];
}
Fila::~Fila(){
    delete [] structure;
}

    bool Fila::isFull(){
        return (rear - front == maxItem);
    }
    bool Fila::isEmpty(){
        return (front == rear);
    }
    void Fila::enqueue(ItemType item){
        if (!isFull())        {
            structure[rear % maxItem] = item;
            rear++;
        }else{
            throw "Enqueue is full";
        }
        
    }
    ItemType Fila::dequeue(){
        if (!isEmpty())
        {
            front++;
            return structure[(front - 1) % maxItem];
        }else{
            throw "Queue is empty";
        }
    }
    void Fila::print(){
            cout << "Fila: \n";
            for (int i = front; i < rear; i++){
                cout << i << " = " << structure[i] << endl;
            }
    }