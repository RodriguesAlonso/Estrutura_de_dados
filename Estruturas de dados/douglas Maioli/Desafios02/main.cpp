#include<iostream>
#include"desafio02.h"


int main()
{
    Desafio02 desafio02;
    //desafio02.ex06();
    //desafio02.ex07();
    //desafio02.ex08();
    //desafio02.ex09();
    int *p = new int;
    *p = 10;
    int *q = new int;
    *q = 5;
    
    desafio02.ex010(p,q);

    return 0;
}
