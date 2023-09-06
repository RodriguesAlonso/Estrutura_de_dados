typedef int ItemType;
const int MAX_ITEM = 100;

class Stack{
    public:
     Stack();
     ~Stack();
     bool isFull();
     bool isEmpty();
     
     void push(ItemType);
     ItemType pop();
     void print();
     int size();

     private:
     int length;
     ItemType* structure;


};