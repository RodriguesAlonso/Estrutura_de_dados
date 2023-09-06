#include <iostream>
#include "hash.h"
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    Hash alunoHash(10);
    int   ras[7]   = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234};
    string nomes[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"}; 

    for (int i = 0; i < 7; i++)
    {
        Aluno aluno = Aluno(ras[i],nomes[i]);
        alunoHash.insertItem(aluno);
    }
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    alunoHash.print();
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

    Aluno pedro(12703, "Pedro");
    Aluno aluno(12704,"");  
    bool found = false;
    alunoHash.retriveItem(pedro, found);
    cout << "Aluno: " << pedro.getName() <<" -> "<< found << endl;
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

    alunoHash.deleteItem(aluno);
    alunoHash.print();
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

    Aluno joao(30201, "Joao");
    alunoHash.insertItem(joao);
    alunoHash.print();
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    alunoHash.deleteItem(joao);
    alunoHash.print();
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    


    return 0;
}