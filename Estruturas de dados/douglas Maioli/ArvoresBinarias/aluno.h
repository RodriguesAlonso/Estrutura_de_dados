#include<iostream>
using std::string;


class Aluno{
    private:
    int ra;
    string name;
    
    public:
    Aluno();
    Aluno(int r,string n);
    int getRa();
    string getName();
    
};