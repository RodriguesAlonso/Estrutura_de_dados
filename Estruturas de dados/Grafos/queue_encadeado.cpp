#include <iostream>
#include <cstddef>
#include <new>

#include "queue.h"
 using namespace std;

    std::ostream &operator<<(std::ostream &os, Vertex const &m) 
    { 
     return os << m.getNome();
    }

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

    bool Queue::isEmpyt() const
    {
        return (front == NULL);
    }
    bool Queue::isFull() const
    {
        NodeType* location;
        try
        {
            location = new NodeType;
            delete location;
            return false;
        }
        catch(const std::bad_alloc exception)
        {
            return true;
        }
    }
    void Queue::print() const
    {
        NodeType* tempPtr = front;
        while (tempPtr != NULL)
        {
            cout << tempPtr->info << endl;
            tempPtr = tempPtr->next;
        }
        cout << endl;
    }

    void Queue::enqueue(ItemType newItem){
        if (isFull())
        {
            NodeType* newNode;
            newNode = new NodeType;
            newNode->info = newItem;
            newNode->next = NULL;
            if (rear == NULL)
            {
                front = newNode;
            }else{
                rear->next = newNode;
                rear = newNode;
            }
        }else{
            throw " Queue is full.";
        }
        
    }

    ItemType Queue::dequeue(){
        if (!isEmpyt())
        {
            NodeType* tempPtr;
            tempPtr = front;
            ItemType item = front->info;
            front = front->next;
            if (front == rear)
            {
                rear = NULL;
            }
            delete tempPtr;
            return item;
        }else{
            throw " Queue is empty.";
        }
    }