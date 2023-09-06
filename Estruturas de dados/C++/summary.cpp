#include <iostream>
#include <vector>
using  std::cout;
using std::cin;
using std::endl;


int main()
{

    return 0;
}

/*
    ---------------------

//operações matématicos
        int nun1, nun2;
        
        cout << "Digite o valor fr nun1: " << endl;
        cin >> nun1;
        cout << "Digite o valor fr nun2: " << endl;
        cin >> nun2;

        int som = nun1 + nun2;
        int sub = nun1 - nun2;
        float div = (float)nun1 / (float)nun2;
        int mult = nun1 * nun2;
        int res = nun1 % nun2;
        
        cout << "soma: " << som << endl;
        cout << "subtração: " << sub << endl;
        cout << "divisão: " << div << endl;
        cout << "multiplicação: " << mult << endl;
        cout << "resto: " << res << endl;

    ----------------------------------------------
// condição if
    int nun1, nun2;
    cout << "Digite um número: " << endl;
    cin >> nun1;
    cout << "Digite outro número" << endl;
    cin >> nun2;
    if (nun1 == nun2){
        cout << nun1 << " = " << nun2 << endl;
    }
    if (nun1 > nun2){
        cout << nun1 << " > " << nun2 << endl;
    }
    if (nun1 < nun2){
        cout << nun1 << " < " << nun2 << endl;
    }

 ---------------------------------------------   
// laço for
    int total;
    for (int i = 0; i <= 20; i+=2){
        total += i;
    }
    cout << "testando for: " << total <<endl;
    -------------------
    
// laço do while
    int num;
    int contador = 0;
    int soma = 0 ;
    do{
        cout << "Digite um número: " << endl;
        cin >> num;
        cout << "Número: "<< num << endl;
        soma += num;
        cout <<"Soma: "<< soma << endl;
        contador++;
        cout <<"Contador: "<< contador <<endl; 
    } while (num != 0);
    float media =(float)soma / (float)(contador -1) ;
    cout << "A média da serie é " << media << endl;
-----------------
// funções
    int soma(int nun1, int nun2)
        {
            return nun1 + nun2;
        }
    int sub(int nun1, int nun2){
        return nun1 - nun2;
    }
    int divi(int nun1, int nun2){
        return nun1 / nun2;
    }
    int mult(int nun1, int nun2){
        return nun1 * nun2;
    }
    int res(int nun1, int nun2){
        return nun1 % nun2;
}------------------------------
//Iniciar vetores estático 
        int c[10];
        int b[10] = {10,23,4};
        int a[] = {1, 2, 3}; // não da para saber a quantidade de elementos NÃO USAR!
        cout << "---------" << endl;
        for(int i = 0; i < 10; i++){
            cout << "c["<< c[i] << "]" << ", ";
        }
        cout << endl << "---------" << endl;
        for(int i = 0; i < 10; i++){
            cout << "b["<< b[i] << "]" << ", ";
// alocação dinâmica
        d* int = new int[const_ele];
// desalocação
        delete []d;
--------------------------------------------------
// Passagem de Parâmetros
    void valor_alocado_memoria(int* p)
        {
            p = new int; // novo endereço de memória
            *p = 8; // aloca valor para o endereçõ dentro da função
        }
    void valor_modificando_memoria(int* p)    
        {
        *p = 8; // modifica o valor dentro do enderço de memoria fora da função
        }
    void referencia(int*& p){
        p = new int; // novo endereço de memória
        *p = 8; // aloca o endereço novo de memória fora da função
    }
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

    cout << endl << "--depois sem onteiro----" << endl;
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

--------------------------------------------------
//Sintax vetor
void modificando_vetor_sintax_1(const int b[], int nun){ // const para não alterar o valor do vetor dentro da função
     for(int i = 0; i < nun; i++){
         b[i] = b[i] * 2;
     }
    }
void modificando_vetor_sintax_2(const int* b, int nun){
    for (int i = 0; i < nun; i++)
    {
        b[i] = b[i] * 2;
    }
    
}
main(){
    // alocação estática
    int c[ELE] = {1,2,3,4,5,6,7,8,9,10};
    // alocação dinâmica
    int *d = new int[ELE];
    for (int i = 0; i < ELE; i++){
        d[i] = i + 1;
    }
    cout << endl << "---antes-C--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"c["<< c[i] << "] ";        
    }
    cout << endl << "---antes-D--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"d["<< d[i] << "] ";        
    }

    modificando_vetor_sintax_1(c, ELE);
    modificando_vetor_sintax_2(c, ELE);

    modificando_vetor_sintax_1(d, ELE);
    modificando_vetor_sintax_2(d, ELE);
    cout << endl << "---depois-C--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"c["<< c[i] << "] ";        
    }
    cout << endl << "---depois-D--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"d["<< d[i] << "] ";        
    }
    
    cout << endl << "------" << endl;


return 0;
}
// tamanho de um vetor sizeof
    int vet[4] ={1,15,16,7};
    int nun1;
    int tamanhoVet;    
    cout << "sizeof vet: " << sizeof(vet) << endl;
    cout << "sizeof int: " << sizeof(nun1) << endl;
    cout << "Quantidade de elementos do vetor: " << sizeof(vet)/sizeof(int) << endl;_______________________________________
    /*
    int** alocarMatriz(int Linhas,int Colunas){ //Recebe a quantidade de Linhas e Colunas como Parâmetro
    
//função geradora de matrizes    
    int i,j; //Variáveis Auxiliares
    
    int **m = (int**)malloc(Linhas * sizeof(int*)); //Aloca um Vetor de Ponteiros
    
    for (i = 0; i < Linhas; i++){ //Percorre as linhas do Vetor de Ponteiros
        m[i] = (int*) malloc(Colunas * sizeof(int)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
        for (j = 0; j < Colunas; j++){ //Percorre o Vetor de Inteiros atual.
                m[i][j] = 0; //Inicializa com 0.
        }
    }
    return m; //Retorna o Ponteiro para a Matriz Alocada
}
    */
