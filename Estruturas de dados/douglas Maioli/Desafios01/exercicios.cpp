#include"exercicios.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int Exercicios::soma(int elementos, float *lista){
    float somar = 0;
    for (int i = 0; i < elementos; i++){
        somar += lista[i];
    }
    return somar;
}
void Exercicios::ex01(float nun){
    cout<< ((nun*nun) -3*nun +5);
}
void Exercicios::ex02(){
    float notas[2];
    float mescola;
    float maluno;
    
    cout<<"digite a media da escola: ";
    cin >> mescola;
    for (int i = 0; i < 3 ; i++)
    {
        cout << "digite a nota "<< i+1 <<": ";
        cin >> notas[i];
        cout <<endl;
    }
    maluno = soma(3, notas)/3;
    cout << "Media do aluno: "<<maluno << endl;
    cout<< "Media da escola: "<<mescola <<endl;
    cout <<"-=-=-=-=-=-=-=-=-="<<endl;
    if (maluno > mescola){
        cout << "Aluno acima da media da escola";}
    else if (maluno < mescola){
        cout << "Aluno abaixo da media da escola";
    }else{
        cout << "Aluno com media igual a da escola";
    }
    
}
void Exercicios::ex03(){
    int nun;
    int fat = 1;
    cout<<"Digite o númer a ser fatorado: ";
    cin >> nun;
    for (int i = 1; i <= nun; i++)
    {
        fat *= i;
    }
    cout << nun <<"! = " << fat;
}
void Exercicios::ex04(){
    int base, pot;
    cout <<"digite o valor da base: ";
    cin >> base;
    cout <<"digite o valor da potencia: ";
    cin >> pot;
    int resultado = 1;
    for (int i = 0; i < pot; i++){
        resultado *= base;
    }
    cout << base << " elavodo a " << pot <<" = " << resultado;
}
void Exercicios::ex05(){
    int idade;
    float renda;
    cout << "informe sua idade: ";
    cin >> idade;
    cout << "informe sua renda: ";
    cin >> renda;
    if (idade >= 21 && renda < 1200)
    {
        cout<<"Pode participar do Programa Moradia Popular.";
    }
    else
    {
        cout << "Não pode participar do Programa Moradia Popular.";
    }
    
}