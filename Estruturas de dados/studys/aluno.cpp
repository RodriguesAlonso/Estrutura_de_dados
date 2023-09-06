#include<iostream>
#include"aluno.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;


Aluno::Aluno(){
    ra = -1;
    name = "";
}
Aluno::Aluno(int ra, string name){
    this->name = name;
    this->ra = ra;
}
string Aluno::getName(){
    return name;
}
int Aluno::getRa(){
    return ra;
}

