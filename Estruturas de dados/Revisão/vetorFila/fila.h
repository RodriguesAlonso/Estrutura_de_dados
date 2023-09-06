typedef char ItemType;
class Fila{
    private:
    int front;
    int rear;
    ItemType* structure;

    public:
    Fila();
    ~Fila();

    bool isFull();
    bool isEmpty();
    void enqueue(ItemType);
    ItemType dequeue();

    void print();
};