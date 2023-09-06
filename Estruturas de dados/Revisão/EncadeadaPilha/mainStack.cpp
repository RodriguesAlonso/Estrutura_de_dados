#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    itemType character;
    character = '9';
    Stack pilha;
    pilha.push('1');
    pilha.push('4');
    pilha.push('2');
    pilha.push('9');
    cout << "\nPush ok\n";
    pilha.print();
    
    itemType x;
     x = pilha.pop();
    cout << x;
    pilha.print();
     x = pilha.pop();
    cout << x;
    pilha.print();
     x = pilha.pop();
    cout << x;
    pilha.print();
    
    cout <<"\nFIM\n";
    return 0;
}