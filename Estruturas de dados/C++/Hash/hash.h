#include"aluno.h"

class Hash{
    private:
    int max_items;
    int length;
    Aluno* structure;
    int getHash(Aluno aluno);

    public:
    Hash(int max_items = 100);
    ~Hash() ;
    bool isFull();
    int getLength() const;

    void retriveItem(Aluno& aluno,bool& found);
    void deleteItem(Aluno aluno);
    void insertItem(Aluno aluno);
    void print();

};