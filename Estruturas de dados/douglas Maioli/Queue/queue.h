typedef int ItemType;
struct NodeType
{
    ItemType info;
    NodeType* next;
};

class Queue{
    private:
    NodeType* front;
    NodeType* rear;

    public:
    Queue();
    ~Queue();

    bool isFull();
    bool isEmpty();
    
    void enQueue(ItemType item);
    ItemType deQueue();

    void print();
};
