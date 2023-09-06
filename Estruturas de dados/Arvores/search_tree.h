#include<iostream>
#include<cstddef>
#include "aluno.h"

struct Nodetype
{
    Aluno aluno;
    Nodetype* esquerda;
    Nodetype* direita;
};

class SearchTree{
    public:
    SearchTree() {root;}
    ~SearchTree(){destroyTree(root);}

    bool isFull() const;
    bool isEmpty() const;
    void retriveAluno(Aluno& aluno, bool& found) const{retriveAluno(root, aluno, found);}
    
    void insertAluno(Aluno aluno) {insertAluno(root, aluno);}
    void deleteAluno(int item) {deleteAluno(root, item);}

    void printerPreOrder() const {printerPreOrder(root);}
    void PrinterInOrder() const {printerInOrder(root);}
    void PrinterPosOrder() const {printerPosOrder(root);}

    private:
        Nodetype* root;
        void destroyTree(Nodetype*& tree);
        void retriveAluno(Nodetype* tree, Aluno& item, bool& found) const;
        void insertAluno(Nodetype*& tree, Aluno item);
        void deleteAluno(Nodetype*& tree, int aluno);
        void deleteNode(Nodetype*& tree);
        void getSucessor(Nodetype* tree, Aluno& data);
        
        void printerPreOrder(Nodetype* tree) const;
        void printerInOrder(Nodetype* tree) const;
        void printerPosOrder(Nodetype* tree) const;
};
