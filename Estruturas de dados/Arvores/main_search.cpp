#include "search_tree.h"

using std::cout;
using std::string;
using std::endl;

const int NumAlunos = 8;

int main(){
    cout<<"FUNCIONA1";
    SearchTree searchTree;

    int ras[8] = {20, 18, 58, 7, 19, 26, 25, 30};     
    string nomes[8] = {"Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta", "ulisses"};
    Aluno alunos[8];
    cout<<"FUNCIONA2";

    for (int i = 0; i < 8; i++)
    {
        cout<<"FUNCIONA3";
        Aluno aluno2 = Aluno(ras[i], nomes[i]);
        cout<<"FUNCIONA3.1";
        alunos[i] = aluno2;
        cout<<"FUNCIONA3.2";
        searchTree.insertAluno(aluno2);
        cout<<"FUNCIONA3.3";
    }
    cout<<"FUNCIONA4";
    cout << "Pre:  ";
    searchTree.printerPreOrder();
    cout << endl;
    cout << "In:   ";
    searchTree.PrinterInOrder();
    cout << endl;
    cout << "Post: ";
    searchTree.PrinterPosOrder();
    cout << endl;
    system("pause>0");
    cout<<"FUNCIONA5";
    return 0;
    
}
