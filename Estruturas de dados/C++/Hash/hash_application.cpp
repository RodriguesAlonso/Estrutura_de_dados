#include<iostream>
#include"hash.h"

using namespace std;

int main(){
    Hash alunoHash(10);
    
    int ra[7] = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234};
    
    string nomes[7] = {"Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"
    };
    
    for (int i = 0; i < 7; i++)
    {
        Aluno aluno = Aluno(ra[i], nomes[i]);
        alunoHash.insertItem(aluno);
    }
    alunoHash.print();
    cout << endl <<"------------------------------" <<  endl;
    
    Aluno aluno1(12704, "");
    bool found = false;
    alunoHash.retriveItem(aluno1, found);
    cout << aluno1.getNome() << "-->" << found <<endl;
    Aluno aluno2(31300, "");
    
    alunoHash.retriveItem(aluno2, found);
    cout << aluno2.getNome() << "-->" << found <<endl;

    cout << endl <<"------------------------------" <<  endl;

    alunoHash.deleteItem(aluno2);
    alunoHash.print();
    cout << endl <<"FIM";
}