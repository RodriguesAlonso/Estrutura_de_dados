typedef char ItemType;

const int MAX_ITEM = 100;

class Stack{
    private:
    int length;
    ItemType* structure;
    public:
    Stack();
    ~Stack();
    bool isFull();
    bool isEmpty();

    int getLength();
    ItemType getTop();
    void push(ItemType item);
    ItemType pop();
    void print();
};