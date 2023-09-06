#include <iostream>
#include "stack.h"

using std::cout;
using std::cin;
using std::endl;


Stack::Stack()
{
   lenght = 0;
   structure = new ItemType(MAX_ITEMS);
}
Stack::~Stack()
{
    delete [] structure;
}

bool Stack::isEmpty() const
{
    return lenght == 0;
}

bool Stack::isFull() const
{
    return lenght == MAX_ITEMS;   
}
void Stack::print() const{
    cout << "Stack: ";
    for (int i = 0; i < lenght; i++)
    {
        cout << structure[i] << ", ";
    }
    cout << endl;
}

void Stack::push(ItemType item)
{
    if (!isFull())
    {
    structure[lenght] = item;
    lenght++;     
    }else{
        throw "Stack already full!";
    }
}    
ItemType Stack::pop()    
{
    if (!isEmpty())
    {
        ItemType aux = structure[lenght -1];
        lenght--;
        return aux;
    }else{
        throw "Stack is empty!";
    }
}

    


