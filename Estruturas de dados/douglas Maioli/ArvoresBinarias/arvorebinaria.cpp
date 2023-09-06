#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;

BinarySearchTree::BinarySearchTree(){
    raiz = NULL;
}
BinarySearchTree::~BinarySearchTree(){
    deleteTree(raiz);
}
void BinarySearchTree::deleteTree(Node* noAtual){
    if (noAtual != NULL)
    {
        deleteTree(noAtual->filhoEsquerda);
        deleteTree(noAtual->filhoDireita);
        delete noAtual;
    }
    
}

Node* BinarySearchTree::getRaiz(){
    return raiz;
}
bool BinarySearchTree::isFull(){
    try
    {
        Node* temp = new Node;
        delete temp;
        return false;
    }
    catch(bad_alloc exception())
    {
        return true;
    }
}
bool BinarySearchTree::isEmpty(){
    return (raiz == NULL);

}

void BinarySearchTree::insert(Aluno aluno){
    if (!isFull())
    {
        Node* newNode = new Node;
        newNode->aluno = aluno;
        newNode->filhoDireita = NULL;
        newNode->filhoEsquerda = NULL;
        if (raiz == NULL)
        {
            raiz = newNode;
        }else{
            Node* temp = raiz;
            while (temp !=NULL)
            {
                if (aluno.getName() < temp->aluno.getName())
                {
                    if (temp->filhoEsquerda == NULL)
                    {
                        temp->filhoEsquerda = newNode;
                        break;
                    }else{
                        temp = temp ->filhoEsquerda;
                    }
                }else{
                    if (temp->filhoDireita == NULL)
                    {
                        temp->filhoDireita = newNode;
                        break;
                    }else{
                        temp = temp ->filhoDireita;
                    }
                }
            }
        }
    }else{
        throw "Tree is full.";
    }
    

}
void BinarySearchTree::remove(Aluno aluno){
    removerbusca(aluno, raiz);
}
void BinarySearchTree::removerbusca(Aluno aluno, Node*& noAtual)
{
    if (aluno.getRa() < noAtual->aluno.getRa())
    {
        removerbusca(aluno, noAtual->filhoEsquerda);
    }
    else if (aluno.getRa() > noAtual->aluno.getRa())
    {
        removerbusca(aluno, noAtual->filhoDireita);
    }
    else
    {
        deletarNode(noAtual);
    }
    
}
void BinarySearchTree::deletarNode(Node*& noAtual){
    Node* temp = noAtual;
    if (noAtual->filhoEsquerda == NULL)
    {
        noAtual = noAtual->filhoDireita;
        delete temp;
    }else if (noAtual->filhoDireita == NULL)
    {
        noAtual = noAtual->filhoEsquerda;
        delete temp;
    }else{
        Aluno alunoSucessor;
        obterSucessor(alunoSucessor, noAtual);
        noAtual->aluno = alunoSucessor;
        removerbusca(alunoSucessor, noAtual->filhoDireita);
    }
    
    
     
}
void BinarySearchTree::obterSucessor(Aluno& AlunoSucessor,Node* noTemp){
    noTemp = noTemp->filhoDireita;
    while (noTemp->filhoEsquerda != NULL)
    {
        noTemp = noTemp->filhoEsquerda;
    }
    AlunoSucessor = noTemp->aluno;
    
}
void BinarySearchTree::busca(Aluno& aluno, bool& found){
    found = false;
    Node* noAtual = raiz;
    while (noAtual != NULL)
    {
        if (aluno.getRa() < noAtual->aluno.getRa())
        {
            noAtual = noAtual ->filhoEsquerda;
        }
        else if (aluno.getRa() > noAtual->aluno.getRa())
        {
            noAtual = noAtual ->filhoDireita;
        }else{
            found = true;
            aluno = noAtual->aluno;
            break;
        }
    }
}

void BinarySearchTree::printPreOrdem(Node* noAtual){
    if (noAtual !=NULL)
    {
        cout << "Nome: " << noAtual->aluno.getRa();
        cout << ", RA: " << noAtual->aluno.getName() << endl;

        printPreOrdem(noAtual->filhoEsquerda);

        printPreOrdem(noAtual->filhoDireita);
    }
    
     
}
void BinarySearchTree::printOrdem(Node* noAtual){
    
    
    if (noAtual != NULL)
    {
        printOrdem(noAtual->filhoEsquerda);
        cout << "Nome: " << noAtual->aluno.getRa();
        cout << ", RA: " << noAtual->aluno.getName() << endl;
        printOrdem(noAtual->filhoEsquerda);
    }
    

}
void BinarySearchTree::printPosOrdem(Node* noAtual){

    if (noAtual != NULL)
    {
        printPosOrdem(noAtual->filhoEsquerda);
        printPosOrdem(noAtual->filhoDireita);
        cout << "Nome: " << noAtual->aluno.getRa();
        cout << ", RA: " << noAtual->aluno.getName() << endl;
    }
    

}