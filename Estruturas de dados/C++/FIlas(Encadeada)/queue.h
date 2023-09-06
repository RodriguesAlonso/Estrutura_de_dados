#include"node_type.h"

class Queue{
    private:
        NodeType* front;
        NodeType* rear;
    public:
        Queue();
        ~Queue();
        
        bool isFull() const;
        bool isEmpty() const;
        void print() const;

        void enqueue(ItemType);
        ItemType dequeue();

};