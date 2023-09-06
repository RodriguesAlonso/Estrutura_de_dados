#include<iostream>
#include"hash.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Hash::Hash(int max){
    max_items = max;
    length = 0;
    structure = new Aluno[max_items];
}
Hash::~Hash(){
    delete [] structure;
}
bool Hash::isFull(){
    return length == max_items;
}
int Hash::getLength() const{
    return length;
}

int Hash::getHash(Aluno aluno){
    return aluno.getRa() % max_items;
}

void Hash::insertItem(Aluno aluno){
    if (!isFull())
    {
        int location = getHash(aluno);
        structure[location] = aluno;
        length++;
    }else{
        throw "Structure already full";
    }
}

void Hash::deleteItem(Aluno aluno){
    int location = getHash(aluno);
    structure[location] = Aluno();
    length--;
}

void Hash::retriveItem(Aluno& aluno, bool& found){
    int location = getHash(aluno);
    Aluno aux = structure[location];
    if (aux.getRa() != aluno.getRa())
    {
        found = false;
    }else{
        found = true;
        aluno = aux;
    }
    
}void Hash::print(){
    for (int i = 0; i < max_items; i++)
    {
        cout << endl << i << ": " << "Aluno: "<<structure[i].getNome() <<" RA: "<< structure[i].getRa();
    }
    
}