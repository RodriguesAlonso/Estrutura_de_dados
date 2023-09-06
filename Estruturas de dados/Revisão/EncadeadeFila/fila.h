typedef int itemType;

struct nodeType
{
    itemType info;
    nodeType* next;
};


class Queue{
    public:
    Queue();
    ~Queue();
    bool isfull();
    bool isEmpty();
    void enqueue(itemType);
    itemType deque();
    void print();
    private:
    nodeType* rear;
    nodeType* front;
};