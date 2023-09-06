#include <iostream>
#define ELE 10

using std::cout;
using std::cin;
using std::endl;

void valor_alocado_memoria(int* p)
        {
            p = new int; // novo endereço de memória
            *p = 8; // aloca valor para o endereçõ dentro da função
        }
    void valor_modificando_memoria(int* p)    
        {
        *p = 8; // modifica o valor do enderço de memoria fora da função
        }
    void referencia(int*& p){
        p = new int; // novo endereço de memória
        *p = 8; // aloca o endereço novo de memória fora da função
    }
main(){
    int a = 1;
    int b = 2;
    int c = 3;
    
    int* p1 = &a;  
    int* p2 = &b;
    int* p3 = &c;
    cout << endl << "--antes sem ponteiro----" << endl;
    cout << "p1: " << p1 <<endl;
    cout << "p2: " << p2 <<endl;
    cout << "p3: " << p3 <<endl;
    cout << endl << "---antes com ponteiro ---" << endl;
    
    cout << "p1: " << *p1 <<endl;
    cout << "p2: " << *p2 <<endl;
    cout << "p3: " << *p3 <<endl;
    cout << endl << "------" << endl;
    
    valor_alocado_memoria(p1);
    valor_modificando_memoria(p2);
    referencia(p3);

    cout << endl << "--depois sem ponteiro----" << endl;
    cout << "p1: " << p1 <<endl;
    cout << "p2: " << p2 <<endl;
    cout << "p3: " << p3 <<endl;
    cout << endl << "---depois com ponteiro ---" << endl;
    
    cout << "p1: " << *p1 <<endl;
    cout << "p2: " << *p2 <<endl;
    cout << "p3: " << *p3 <<endl;
    cout << endl << "--Valores---" << endl;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
return 0;
}