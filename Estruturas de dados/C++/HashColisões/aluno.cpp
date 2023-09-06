#include<iostream>
#include"aluno.h"

using namespace std;

Aluno::Aluno(int ra, string name){
    this->ra = ra;
    this->name = name;
};
Aluno::Aluno(){
    this->ra = -1;
    this->name = "";
}

string Aluno::getName(){
    return name;
}
int Aluno::getRa(){
    return ra;
}
