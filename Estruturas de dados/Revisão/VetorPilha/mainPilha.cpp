#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    Stack stack;
    ItemType character;
    ItemType stackItem;

    cout<<"Digite um string: ";
    cin.get(character);
    while (character != '\n')
    {
        stack.push(character);
        cin.get(character);
    }
    stack.print();
    while (!stack.isEmpty())
    {
        stackItem = stack.pop();
        cout << stackItem;
    }
    cout <<"\nFIM\n";
    stack.print();
    return 0;
}