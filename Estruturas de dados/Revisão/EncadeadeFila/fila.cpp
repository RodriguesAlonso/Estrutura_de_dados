#include "fila.h"
#include <iostream>
#include <cstddef>

using namespace std;

Queue::Queue(){
    front = NULL;
    rear = NULL;
}
Queue::~Queue(){
    nodeType* location;
    while (front != NULL)
    {
        location = front;
        front = front->next;
        delete location;
    }
    rear = NULL;
}
bool Queue::isfull(){
    try
    {
        nodeType* temp;
        temp = new nodeType;
        delete temp;
        return false;
    }
    catch(bad_alloc exception)
    {
        throw "Queue is already full";
    }
    
}
bool Queue::isEmpty(){
    return(front == NULL);
}
void Queue::enqueue(itemType item){
    if (!isfull())
    {   
        nodeType* newNode;
        newNode = new nodeType;
        newNode->info = item;
        newNode->next = NULL;
        if (rear == NULL)
        {
            front = newNode;
        }else{
            rear->next = newNode;
        }
        rear = newNode;
    }else
        throw "Queue is Full";
    

}
itemType Queue::deque(){
    if (!isEmpty())
    {
        nodeType* tempPtr;
        tempPtr = front;
        itemType item = front->info;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete tempPtr;
        return item;
    }else{
        throw "Queue is empty.";
    }
}
void Queue::print(){
    nodeType* tempPtr = front;
    cout << "Queue: \n";
    while (tempPtr != NULL)
    {
        cout << tempPtr->info << "; ";
        tempPtr = tempPtr->next;
    }
    cout << endl;
}