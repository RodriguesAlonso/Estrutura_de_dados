#include "item_type.h"

const int ITEM_MAX = 100;

class Stack{
    private:
    int length;
    ItemType* structure;

    public:
    Stack();
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();

};
