#include <iostream>
#include <cstddef>
#include "queue.h"

using std::cout;
using std::cin;
using std::endl;
using std::bad_alloc;

Queue::Queue()
{
    front = NULL;
    rear = NULL;
}

Queue::~Queue(){
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front -> next;
        delete tempPtr;
    }
    rear = NULL;
}

bool Queue::isFull() const{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(const bad_alloc exception)
    {
        return true;
    }
}

bool Queue::isEmpty() const{
    return (front == NULL);
}

void Queue::enqueue(ItemType newItem){
    if (!isFull())
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode -> info = newItem;
        newNode -> next = NULL; 
        if (rear == NULL)
        {
            front = newNode;
        }
        else{
            rear -> next = newNode;
        }
        rear = NULL;
    }else{
        throw "Queue is already full";
    }
}

ItemType 
Queue::dequeue(){
    if (!isEmpty())
    {
        NodeType* tempPtr;
        ItemType item = front -> info;
        tempPtr = front;
        front = front -> next;
        if (rear == NULL)
        {
            front = NULL;
        }
        delete tempPtr;
        return item;
    }
    else
    {
        throw "Enqueue is empty";
    }
}

void Queue::print() const{
    NodeType* tempPtr;
    tempPtr = front;
    while (tempPtr !=NULL){
        cout << tempPtr -> info;
        tempPtr = tempPtr -> next;
    }
    cout << endl;
}