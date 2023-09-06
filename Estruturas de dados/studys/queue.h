#include"item_type.h"
const int MAX_ITEM = 100;

class Queue{
    private:
    ItemType* structure;
    int front;
    int back;


    public:
    Queue();
    ~Queue();

    bool isFull();
    bool isEmpty();
    void print();
    void enqueue(ItemType item);
    ItemType dequeue();

};


