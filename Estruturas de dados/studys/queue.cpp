#include<iostream>
#include"queue.h"

using std::cout;
using std::cin;
using std::endl;

Queue::Queue(){
    structure = new ItemType[MAX_ITEM];
    int front = 0;
    int back = 0;
}
Queue::~Queue(){
    delete [] structure;
}

bool Queue::isEmpty(){
    return front == back;
}
bool Queue::isFull(){
    return back - front == MAX_ITEM;
}
void Queue::print(){
    cout <<"Queue: ";
    for (int i = front; i < back; i++)
    {
        cout<< structure[i] <<",";
    }
    cout << endl;
}
void Queue::enqueue(ItemType item){
    if (!isFull())
    {
        structure[back % MAX_ITEM] = item;
        back++;
    }else{
        throw "Queue is full.";
    }
}
ItemType Queue::dequeue(){
    if (!isEmpty())
    {
        front++;
        return structure[(front - 1) % MAX_ITEM];
    }else{
        throw "Queue is empty.";
    }
    
}