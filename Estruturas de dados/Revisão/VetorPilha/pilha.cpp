#include "pilha.h"
#include <iostream>

using namespace std;

Stack::Stack(){
    length = 0;
    structure = new ItemType[MAX_ITEM];
}
Stack::~Stack(){
    delete [] structure;
}

int Stack::getLength(){
    return length;
}

bool Stack::isFull(){
    return (length == MAX_ITEM);
}

bool Stack::isEmpty(){
    return(length == 0);
}

ItemType Stack::getTop(){
    return structure[length];
}

void Stack::print(){
    cout << "PILHA = ";
    for (int i = 0; i < length; i++)
    {
        cout<< structure[i];
    }
    cout << endl;
}

void Stack::push(ItemType item){

    if (!isFull())
    {
        structure[length] = item;
        length++;
    }else{
        throw "stack is full.";
    }
}
ItemType Stack::pop(){
    if (!isEmpty())
    {
        ItemType temp = structure[length - 1];
        length--;
        return temp;
    }else{
        throw "Stack is empty.";
    }
}
