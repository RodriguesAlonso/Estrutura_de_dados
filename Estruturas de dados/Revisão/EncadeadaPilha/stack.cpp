#include "stack.h"
#include <iostream>
#include <cstddef>
#include <new>

using namespace std;

Stack::Stack(){
    structure = NULL;
}
Stack::~Stack()
{
    nodeType* tempPtr;
    while (structure != NULL)
    {
        tempPtr = structure;
        structure = structure->next;
        delete [] tempPtr;
    }    
}
bool Stack::isFull(){
    nodeType* newStructure;
    try
    {
        newStructure = new nodeType;
        delete newStructure;
        return false;
    }
    catch(std::bad_alloc exception)
    {
        return true;
    }
}
    bool Stack::isEmpty(){
        return structure == NULL;        
    }
void Stack::push(itemType item){
    if (!isFull())
    {
        nodeType* location;
        location = new nodeType;
        location->info = item;
        location->next = structure;
        structure = location;
    }else
        throw "Stack is full";
    }
itemType Stack::pop(){
    if (!isEmpty())
    {
        nodeType* tempPtr = structure;
        itemType item = structure->info;
        structure = structure->next;
        delete tempPtr;
        return item;
    }else
        throw "Stack is empty.";
    }
void Stack::print(){
     cout << "Stack: \n";
     int i = 0;
     nodeType* tempPtr = structure;
     while (tempPtr != NULL)
     {
         cout << i << ": " << tempPtr->info<<endl;
         tempPtr = tempPtr->next;
         i++;
     }     
    }