#include <iostream>
#include "hash.h"


using namespace std;

int main()
{
    Hash alunoHash(5);
    Aluno aluno1("joao", 200);
    Aluno aluno2("Paulo", 205);
    Aluno aluno4("Rodrigues", 210);
    
    cout << "-=-=-=antes=-=-=-";
    alunoHash.print();
    
    alunoHash.insertHash(aluno1);
    alunoHash.insertHash(aluno2);
    alunoHash.insertHash(aluno4);
    
    Aluno aluno5("Vicente", 215);
    alunoHash.insertHash(aluno5);

    cout << endl <<"-=-=-=depois-=-=-"<< endl;
    alunoHash.print();
    Aluno aluno3("", 210);
    bool found = false;
    alunoHash.retriveHash(aluno3, found);
    cout << endl << "RA: "<< aluno3.getRa() << " Aluno: " << aluno3.getNome() << " -> " << found;
    alunoHash.deleteAluno(aluno1);
    cout << endl <<"-=-=-=FIM-=-=-";
    alunoHash.print();
    
    return 0;
    
}
