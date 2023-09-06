#include <iostream>
#include "arvorebinaria.h"

using namespace std;

int main(){
    BinarySearchTree arvoreAlunos;
    int ra[4] = {1, 2, 3, 4};
    string nome[4] = {"joao", "paulo", "rodrigues", "alonso"};
    Aluno alunos[4];
    for (int i = 0; i < 4; i++)
    {
        Aluno aluno = Aluno(ra[i], nome[i]);
        alunos[i] = aluno;
        arvoreAlunos.insert(aluno);
    }
    arvoreAlunos.printOrdem(arvoreAlunos.getRaiz());
    cout << endl<<"-=-=-=-=-=-="<< endl;
    arvoreAlunos.printPosOrdem(arvoreAlunos.getRaiz());
    cout << endl<<"-=-=-=-=-=-="<< endl;
    arvoreAlunos.printPreOrdem(arvoreAlunos.getRaiz());
    

}