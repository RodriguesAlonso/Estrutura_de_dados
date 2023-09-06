#include<iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack stack;
    ItemType character;
    ItemType stackItem;

    cout << "Add one String. "<<endl;
    cin.get(character);
    while (character !=  '\n')
    {
        stack.push(character);
        cin.get(character);
    }
    while (!stack.isEmpty())
    {
        stackItem = stack.pop();
        cout << stackItem;
    }

    return 0;
}
