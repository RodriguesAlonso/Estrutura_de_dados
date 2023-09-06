#include <iostream>
using namespace std;

class Aluno{
    private:
    int ra;
    std::string nome;
    
    public:
    Aluno();
    Aluno(std::string nome, int ra);
    int getRa();
    string getNome();
};