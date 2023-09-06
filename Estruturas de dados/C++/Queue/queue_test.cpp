#include<iostream>
#include"queue.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char character;
    char queueCharacter;
    Queue queue;

    cout << "Add a String: "<< endl;
    cin.get(character);
    while (character != '\n' and !queue.isFull())
    {
        queue.enqueue(character);
        cin.get(character);
    }
    queue.print();
    cout << endl;    
    while (!queue.isEmpty())
    {
        queueCharacter = queue.denqueue();
        cout << queueCharacter;
    }
    cout <<endl;
    
    return 0;
}
