#include<iostream>
#include"stack.h"
#include<cstddef> //NULL

using std::cout;
using std::cin;
using std::endl;
using std::string;
    
Stack::Stack(){
    topNode = NULL;
}
Stack::~Stack(){
    node* tempnode;
    while (topNode != NULL){
        tempnode = topNode;
        topNode = topNode ->next;
        delete tempnode;
    };

}
bool Stack::isFull(){
    node* NewNode;
    try
    {
        NewNode = new node;
        delete NewNode;
        return false;
    }
    catch(std::bad_alloc expetion)
    {   
        cout << "Stack is full.";
        return true;
    }
    
}
bool Stack::isEmpty(){
    return topNode == NULL;
}
void Stack::print(){
    node* tempNode = topNode;
    cout<< "Stack: [ ";
    while (topNode != null)
    {
        cout<< tempNode -> item<<" ";]
        tempNode = tempNode->next;
    }
    cout<< "Stack: ]"
    

}

void Stack::push(ItemType item){
    if (!isFull())
    {
        node* newNode = new node;
        newNode ->item = item;
        newNode ->next= topNode;
        topNode = newNode;
    }else{
        throw "Stack is full"
    }
    

}
ItemType Stack::pop(){
    if (isEmpty())
    {   
        ItemType item = topnode->valor;
        node* tempNode = topNode;
        topNode = topNode ->next;
        delete tempNode;
        return item;
    }else{
        throw "Stack is empty"
    }
    

}