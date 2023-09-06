#include<iostream>
#include"aluno.h"
using namespace std;

Aluno::Aluno(){
    ra = -1;
    nome = "";
}
Aluno::Aluno(int ra, string nome){
    this->ra = ra;
    this->nome = nome;
}
int Aluno::getRa() const{
    return ra;
}
string Aluno::getNome() const{
    return nome;
}