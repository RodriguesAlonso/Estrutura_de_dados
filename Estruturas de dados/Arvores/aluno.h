#include <iostream>
using std::string;

class Aluno{
    private:
    int ra;
    string nome;

    public:
    Aluno();
    Aluno(int ra, string nome);
    int getRa() const;
    string getNome() const;
};