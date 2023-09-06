#include<iostream>
#include"cidades.h"

using std::cout;
using std::cin;
using std::endl;

Cidades::Cidades(int ano = 0, int populacao =-1){
    this->ano = ano;
    this->populacao = populacao;
}

int Cidades::getAno(){
    return ano;
}

int Cidades::getPopulacao(){
    return populacao;
}

void Cidades::setAno(int ano){
    this->ano = ano;
}

void Cidades::print(){
    cout <<"\nfundação: "<<ano<<"\npopulacao: " <<populacao << endl;
}