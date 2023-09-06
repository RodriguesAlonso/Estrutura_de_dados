#include<iostream>
#include"aluno.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Aluno::Aluno(){
    this->ra = 0;
    this->nome = "";
}

Aluno::Aluno(int ra, string nome){
    this->ra = ra;
    this->nome = nome;
}
string Aluno::getNome()const{
    return nome;
}
int Aluno::getRa()const{
    return ra;
}