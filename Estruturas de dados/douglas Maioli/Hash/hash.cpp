#include<iostream>
#include "hash.h"
using namespace std;

Hash::Hash(int max){
    max_item = max;
    structure = new Aluno[max_item];
    length = 0;
}
Hash::~Hash(){
    delete []structure;
}

int Hash::getHash(Aluno aluno){
    return aluno.getRa() % max_item;
}

int Hash::getLenght(){
    return length;
}

void Hash::print(){
    for (int i = 0; i < max_item; i++ ){
        cout << endl << i <<": "<<structure[i].getNome() <<" RA: " << structure[i].getRa();
    }
}

void Hash::insertHash(Aluno aluno){
    int location;
    location = getHash(aluno);
    cout << endl << location <<"-=-=-=\n";
    while (structure[location].getRa() > 0)
    {
        cout << endl << location <<"-=-=-=\n";
        location = (location + 1) % max_item;
    }
    structure[location] = aluno;
    cout << endl << structure[location].getNome() <<" : " << location <<"-=-=-=\n";
    length++;
    }

void Hash::deleteAluno(Aluno aluno){
    int location = getHash(aluno);
    bool test = false;
    while (structure[location].getRa() != -1)
    {
        if (structure[location].getRa() == aluno.getRa())
        {
            test = true;
            structure[location] = Aluno("", -2);
            cout <<endl <<"delete: " << aluno.getNome();
            length--;
            break;
        }
        location = (location +1) % max_item;
    }
    if (!test)
    {
        cout << "\nNenhum aluno foi encontrado" << endl;
    }
}

void Hash::retriveHash(Aluno& aluno, bool& found){
    found = false;
    int location = getHash(aluno);
    Aluno aux = structure[location];
    while (structure[location].getRa() != -1)
    {
        if (structure[location].getRa() == aluno.getRa())
        {
            found = true;
            aluno = structure[location];
            break;
        }
        location = (location + 1) % max_item;
    }
           
}
