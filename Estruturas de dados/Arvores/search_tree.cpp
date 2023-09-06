#include "search_tree.h"


void SearchTree::destroyTree(Nodetype*& tree)
{
    if (tree != NULL)
    {
        destroyTree(tree->esquerda);
        destroyTree(tree->direita);
        delete tree;
    }
    
}
bool SearchTree::isFull() const{
    Nodetype* location;
    try
    {
        location = new Nodetype;
        delete location;
        return false;
    }
    catch(std::bad_alloc exception)
    {
        return true;
    }
    
}
bool SearchTree::isEmpty() const{
    return root == NULL;
}

void SearchTree::retriveAluno(Nodetype* tree, Aluno& aluno, bool& found) const
{
    if (tree == NULL)
    {
        found = false;
    }
    else if ((aluno.getRa()) < tree->aluno.getRa())
    {
        retriveAluno(tree->esquerda, aluno, found);
    }
    else if (aluno.getRa() < tree->aluno.getRa())
    {
        retriveAluno(tree->direita, aluno, found);
    }
    else
    {
        aluno = tree->aluno;
        found = true;
    }
}
void SearchTree::insertAluno(Nodetype*& tree, Aluno aluno)
{
    if (tree == NULL)
    {
        tree = new Nodetype;
        tree->direita = NULL;
        tree->esquerda = NULL;
        tree->aluno = aluno;
    }
    else if (aluno.getRa() < tree->aluno.getRa())
    {
        insertAluno(tree->esquerda, aluno);
    }
    else{
        insertAluno(tree->direita, aluno);
    }
}
void SearchTree::deleteAluno(Nodetype*& tree, int aluno) {
    if (aluno < tree->aluno.getRa())
    {
        deleteAluno(tree->esquerda, aluno);
    }
    else if (aluno > tree->aluno.getRa())
    {
        deleteAluno(tree->direita,aluno);
    }
    else if (aluno == tree->aluno.getRa())
    {
        deleteNode(tree);
    }
}
void SearchTree::deleteNode(Nodetype*& tree)
{
    Aluno data;
    Nodetype* tempPtr;
    tempPtr = tree;
    if (tree->esquerda == NULL)
    {
        tree = tree->esquerda;
        delete tempPtr;
    }
    else if (tree->direita == NULL)
    {
        tree = tree->esquerda;
        delete tempPtr;
    }else{
        getSucessor(tree, data);
        tree->aluno = data;
        deleteAluno(tree->direita, data.getRa());
    }
}
void SearchTree::getSucessor(Nodetype* tree, Aluno& data)
{
    tree = tree->direita;
    while (tree->esquerda !=NULL)
    {
        tree = tree->esquerda;
    }
    data = tree->aluno;
}
void SearchTree::printerPreOrder(Nodetype* tree) const
{
    if (tree != NULL)
    {
        std::cout << tree->aluno.getNome() << ", ";
        printerPreOrder(tree->esquerda);
        printerPreOrder(tree->direita);
    }
}
void SearchTree::printerInOrder(Nodetype* tree) const{
    if (tree != NULL)
    {
        printerInOrder(tree->esquerda);
        std::cout << tree->aluno.getNome() << ", ";
        printerInOrder(tree->direita);
    }
    
}
void SearchTree::printerPosOrder(Nodetype* tree) const
{
    printerPosOrder(tree->esquerda);
    printerPosOrder(tree->direita);
    std::cout << tree->aluno.getNome() << ", ";
}