#include <iostream>

using std::string;

class Aluno{
    public:
    Aluno();
    Aluno(int, string);
    int getRa();
    string getNome();
    private:
    int ra;
    string nome;
};