#include "aluno.h"

class Hash{
    private:
    Aluno* structure;
    int max_item;
    int length;
    int getHash(Aluno aluno);

    public:
    Hash(int maxItem = 100);
    ~Hash();

    void retriveItem(Aluno& aluno,bool& found);
    void insertItem(Aluno aluno);
    void deleteItem(Aluno aluno);
    void print();

    bool isFull();
    int getLength();

    
};