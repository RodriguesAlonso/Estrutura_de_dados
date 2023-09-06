#include"aluno.h"

class Hash{
    private:
    Aluno* structure;
    int max_item;
    int length;
    int getHash(Aluno aluno);

    public:
    Hash(int max_item = 100);
    ~Hash();

    bool isFull();
    int getlength();
    void retriveItem(Aluno& Aluno, bool& found);
    void deleteItem(Aluno aluno);
    void insertItem(Aluno aluno);
    void print();

};