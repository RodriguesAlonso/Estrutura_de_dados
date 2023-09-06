#include"item_type.h";
const int MAX_ITEM = 100;

class Stack{
    private:
    ItemType* structure;
    int length;


    public:
    Stack();
    ~Stack();

    bool isFull();
    bool isEmpty();

    void push(ItemType item);
    ItemType pop();
    void print();
};