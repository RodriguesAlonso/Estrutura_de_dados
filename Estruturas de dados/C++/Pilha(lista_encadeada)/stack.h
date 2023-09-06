#include "node_type.h"

class Stack{
    private:
    NodeType* structure;

    public:
    Stack();
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();

};