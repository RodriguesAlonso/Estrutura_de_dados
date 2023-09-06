#include<iostream>
#include<cstddef>
#include"queue.h"

using std::cout;
using std::cin;
using std::endl;

Queue::Queue(){
    front = NULL;
    rear = NULL;
}
Queue::~Queue(){
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

bool Queue::isFull(){
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(const std::exception& e)
    {
        cout << "It is not possible to allocation another node";
    }
}
bool Queue::isEmpty(){
    return (front == rear);
}
    
void Queue::enQueue(ItemType item){
    if (!isFull())
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = item;
        newNode->next = NULL;
        if (rear == NULL)
        {
            front = newNode;
        }else{
            rear->next = newNode;
            rear = newNode;
        }
        
    }else{
        throw "Queue is already full.";
    }
    

}
ItemType Queue::deQueue()
{
    if (!isEmpty())
    {
        NodeType* tempNode;
        tempNode = front;
        ItemType item = front->info;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
            delete tempNode;
        }
    }else{
           throw "Queue is empty.";
    }
}
void Queue::print(){
    while (front != NULL)
    {
        cout << front->info << endl;
        front = front->next;
    }
    
}