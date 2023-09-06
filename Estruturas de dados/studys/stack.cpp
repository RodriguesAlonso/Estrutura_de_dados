#include<iostream>
#include"stack.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Stack::Stack(){
    length = 0;
    structure = new ItemType[MAX_ITEM]
}
Stack::~Stack(){
    delete [] structure;
}
bool Stack::isEmpty(){
    return length == 0;
}
bool Stack::isFull(){
    return length == MAX_ITEM;
}
void Stack::print(){
    for (int i = 0; i < length; i++)
    {
        cout << i <<": " << structure[i] << endl;
    }
}
void Stack::push(ItemType item){
    if (!isFull())
    {
        structure[length] = item;
        length++;
    }
    else{
        throw "Stack is full.";
    }
}
ItemType Stack::pop(){
    if (!isEmpty())
    {
        ItemType aux = structure[-1];
        length--;
        return aux;
    }
    else{
        throw "Stack is empty.";
    }
}