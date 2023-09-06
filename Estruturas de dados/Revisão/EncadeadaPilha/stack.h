typedef char itemType;

struct nodeType
{
    itemType info;
    nodeType* next;
};

class Stack{
    public:
    Stack();
    ~Stack();
    bool isFull();
    bool isEmpty();
    void push(itemType);
    itemType pop();
    void print();
    private:
    nodeType* structure;
};
