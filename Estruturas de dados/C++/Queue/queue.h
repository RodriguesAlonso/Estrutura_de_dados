#include "item_Type.h"

const int MAX_ITEM = 100;

class Queue{
    private:
    int front;
    int back;
    ItemType* structure;

    public:
    Queue();
    ~Queue();

    bool isFull() const;
    bool isEmpty() const;
    void print() const;

    void enqueue(ItemType);
    ItemType denqueue();
};