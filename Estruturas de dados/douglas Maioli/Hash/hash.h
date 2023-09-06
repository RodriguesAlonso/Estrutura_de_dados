#include "Aluno.h"

class Hash{
    private:
    int length;
    int max_item;
    Aluno* structure;
    int getHash(Aluno aluno);

    public:
    Hash(int max_item = 100);
    ~Hash();
    int getLenght();
    void print();
    void retriveHash(Aluno& aluno, bool& found);
    void insertHash(Aluno aluno);
    void deleteAluno(Aluno aluno);


};