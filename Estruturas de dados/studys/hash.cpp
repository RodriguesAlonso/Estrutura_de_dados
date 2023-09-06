#include<iostream>
#include "hash.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

Hash::Hash(int max){
    max_item = max;
    length = 0;
    structure = new Aluno[max_item];
}
Hash::~Hash(){
    delete [] structure;
}

int Hash::getHash(Aluno aluno){
    return aluno.getRa() % max_item;
}

bool Hash::isFull(){
    return length == max_item;
}
int Hash::getLength(){
    return length;
}

void Hash::print(){
    for (int i = 0; i < max_item; i++)
    {
        cout << i << ")Aluno: " << structure[i].getName() << "\t  RA: " << structure[i].getRa() <<endl;
    }
    
}
void Hash::retriveItem(Aluno& aluno, bool& found){
    int startLocation = getHash(aluno);
    int location = startLocation;
    bool moreSearch = true;
    do
    {
      if (structure[location].getRa() == aluno.getRa() || structure[location].getRa() == -1)
      {
          moreSearch = false;
      }else{
          location = (location + 1) % max_item;
      }
      
    } while (location != startLocation && moreSearch);
    found = structure[location].getRa() == aluno.getRa();
    if (found)
        aluno = structure[location];
}




void Hash::deleteItem(Aluno aluno){
    int startLocation = getHash(aluno);
    int location = startLocation;
    bool moreSearch = true;
    do
    {
        if (structure[location].getRa() == aluno.getRa() || structure[location].getRa() == -1)
        {
            moreSearch = false;
        }else{
        location = (location + 1) % max_item;
        }
    } while (location != startLocation && moreSearch);
    if (structure[location].getRa() == aluno.getRa())
    {
        structure[location] = Aluno(-2,"");
        length--;
    }
}
void Hash::insertItem(Aluno aluno){
    int location = getHash(aluno);
    while (structure[location].getRa() > 0)
    {
        location = (location + 1) % max_item;
    }
    structure[location] = aluno;
    length++;
}