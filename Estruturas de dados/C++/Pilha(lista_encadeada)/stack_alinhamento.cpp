#include <iostream>
#include "stack.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Stack stack;
    ItemType character;
    ItemType stackItem;
    

    cout << "insira uma String: " << endl;
    cin.get(character);

    bool isMatched = true;
    while   (isMatched && character != '\n')
        {
            
            if (character == '{' || character == '(' || character == '[')
            {
                stack.push(character);
            
            }
            if (character == '}' || character == ')' || character == ']'){
            if (stack.isEmpty())
            {
                isMatched = false;
            }else{
                stackItem = stack.pop();
                isMatched = (character == '}' && stackItem == '{') 
                ||(character == ']' && stackItem == '[')
                ||(character == ')' && stackItem == '(');
            
            }
        
        }
        cin.get(character);
    }
    if (isMatched && stack.isEmpty())
    {
        cout << "Bem formado \n";
    }else{
        cout << "Mal formado \n";
    }
}

