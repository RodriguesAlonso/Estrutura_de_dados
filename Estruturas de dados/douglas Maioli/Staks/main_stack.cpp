#include<iostream>
#include"stack.h"
using std::cout;

int main(){
    Stack stack1;
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=";
    cout<< "\nTamanho = " << stack1.size();
    cout<<"\n-=-=-=-=-=-=-=-=-=-=-=-=\n";
    for (int i = 0; i < MAX_ITEM/4; i++)
    {
        stack1.push(i*2);
    }
    stack1.print();
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout<< "Tamanho = " << stack1.size();
    cout<<"\n-=-=-=-=-=-=-=-=-=-=-=-=\n";
    for (int i = 0; i < 20; i++)
    {
        cout << stack1.pop()<<"; ";
    }
    cout<<"\n-=-=-=-=-=-=-=-=-=-=-=-=";
    cout<< "\nTamanho = " << stack1.size();
    cout<<"\n-=-=-=-=-=-=-=-=-=-=-=-=\n";


    return 0;
}