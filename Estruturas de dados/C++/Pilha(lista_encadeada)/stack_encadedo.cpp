#include "stack.h"
#include <cstddef>
#include <new>

#include<iostream>
using std::cout;
using std::bad_alloc;
using std::endl;

Stack::Stack(){
    structure = NULL;
}

Stack::~Stack(){
   NodeType* tempPtr;
   while (structure != NULL)
   {
       tempPtr = structure;
       structure =structure -> next;
       delete tempPtr;
   }
}

bool Stack::isEmpty() const{
    return (structure == NULL);
}
bool Stack::isFull() const{
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }catch(const bad_alloc exception)
    {
        return true;
    }
}

void Stack::print() const{
    NodeType* tempStucture = structure;
    while(tempStucture != NULL){
        cout << tempStucture -> info;
        tempStucture = tempStucture-> next;
    }
     cout << endl;
}

void Stack::push(ItemType item){
    if (!isFull())
    {
        NodeType* location;
        location = new NodeType;
        location -> info = item;
        location -> next = structure;
        structure = location;         
    }else{
        throw "Stack already full!";
    }
}
ItemType Stack::pop(){
    if (!isEmpty())
    {
        NodeType* tempPtr;
        tempPtr = structure;
        ItemType item = structure ->info;
        structure =structure -> next;
        
        delete tempPtr;
        return item;
    }else{
        throw "Stack is empty!";
    }
}

