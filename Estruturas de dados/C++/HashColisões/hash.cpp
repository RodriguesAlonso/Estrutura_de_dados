#include<iostream>
#include"hash.h"

using namespace std;

Hash::Hash(int max){
    length = 0;
    max_item = max;
    structure = new Aluno[max_item];
}

Hash::~Hash(){
    delete []structure;
}

int Hash::getHash(Aluno aluno){
    return aluno.getRa() % max_item;
    }

bool Hash::isFull(){
    return length == max_item;
}

int Hash::getlength(){
    return length;
}

void Hash::print(){
    for (int i = 0; i < max_item; i++)
    {
        cout <<i <<"- Aluno: "<< structure[i].getName() <<", RA: "<<structure[i].getRa()<<endl;
    }
        
}

void Hash::retriveItem(Aluno& aluno, bool& found){
    int startlocation = getHash(aluno);
    bool moreSearch = true;
    int location = startlocation;
    do
    {
        if (structure[location].getRa() == aluno.getRa() || structure[location].getRa() == -1)
    {
        moreSearch = false;
    }else{
        location = (location +1) % max_item;
    }
    } while (location != startlocation && moreSearch);
    found = structure[location].getRa() == aluno.getRa();
    if(found){
        aluno = structure[location];
    }
}
void Hash::deleteItem(Aluno aluno){
    int startLocation = getHash(aluno);
    int location = startLocation;
    bool moreSearch = true;
do
{
    if (structure[location].getRa() == aluno.getRa() || structure[location].getRa() == -1 )
    {
        moreSearch = false;
    }else{
        location = (location + 1) % max_item;
    }
    
} while (startLocation != location && moreSearch);
if (structure[location].getRa() == aluno.getRa())
{
    structure[location] = Aluno(-2,"");
    length--;
}

}
void Hash::insertItem(Aluno aluno){
    int location;
    location = getHash(aluno);
    while (structure[location].getRa() > 0)
    {
        location = (location + 1) % max_item;
    }
    structure[location] = aluno;
    length++;
    
    
}
