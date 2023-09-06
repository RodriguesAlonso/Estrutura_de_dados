#include"queue.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Queue::Queue(){
    front = 0;
    back = 0;
    structure = new ItemType(MAX_ITEM);
}
Queue::~Queue(){
    delete []structure;
}

bool Queue::isEmpty() const
{
    return front == back;
}
bool Queue::isFull() const
{
    return back - front == MAX_ITEM;
}
void Queue::print() const
{
    cout << "Queue: ";
    for (int i = front; i < back; i++)
    {
        cout << structure[i % MAX_ITEM] << ", ";
    }
}

void Queue::enqueue(ItemType item){
    if (!isFull())
    {
        structure[back % MAX_ITEM] = item;
        back ++;
    }else{
        throw "Queue is already full!";
    }
    
    
}
ItemType Queue::denqueue(){
    if (!isEmpty())
    {
        front ++;   
        return structure[front-1 %MAX_ITEM];
        
    }else{
        throw "Queue is empty!";
    }
    

}