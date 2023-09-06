#include<iostream>
#include"stack.h"

using std::cout;
using std::cin;
using std::endl;

Stack::Stack(){
    length = 0;
    structure = new ItemType[MAX_ITEM];
}
Stack::~Stack(){
    delete []structure;
}
bool Stack::isFull(){
    return length == MAX_ITEM;
}
bool Stack::isEmpty(){
    return length == 0;

}
void Stack::push(ItemType item){
    if (!isFull())
    {
        structure[length] = item;
        length++;
    }else{
        throw "Stack is full.";
    }
    

}
ItemType Stack::pop(){
    if (!isEmpty())
    {
        length--;
        return structure[length];
    }else{
        throw "Stack is empty.";
    }
    
}

void Stack::print(){
    for (int i = 0; i < length; i++)
    {
        cout << "structure [" << i << "] = " << structure[i] << endl;
    }
}
int Stack::size(){
    return length;
}