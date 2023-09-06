//Dynamic Stack.
typedef int ItemType;

struct node
{
    ItemType item;
    node* next;
};

class Stack{
    private:
    node* topNode;
    
    public:
    Stack();
    ~Stack();
    bool isFull();
    bool isEmpty();
    void print();

    void push(ItemType item);
    ItemType pop();
};