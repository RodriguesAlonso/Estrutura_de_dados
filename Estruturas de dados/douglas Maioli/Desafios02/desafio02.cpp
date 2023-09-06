#include<iostream>
#include "desafio02.h"

using std::cout;
using std:: cin;
using std:: cout;
using std::endl;


void Desafio02::ex06() const{
    float familia[5];
    float mean;
    for (int i = 0; i < 5; i++)
    {
        cout << "Report family " << i + 1 <<" spending: ";
        cin >> familia[i];
    }
    mean = (familia[0] + familia[1] + familia[2] + familia[3] + familia[4])/5;
    cout << "family mean = "<<mean<< endl;

    for (int i = 0; i < 5; i++)
    {
        if (familia[i] > mean)
        {
            cout << "family " << i + 1 << " spending is higher then the averager household" << endl;
        }
        else if (familia[i] == mean)
        {
            cout << "family " << i + 1 << " spending is on averager household" << endl;
        }
        
        else{
            cout << "family " << i + 1 << " spending is lower then the averager household" << endl;
        }
        
    }
    
    
    
    
    

}
void Desafio02::ex07()const{
    int rows, columns;
    cout << "Enter the matrix rows: ";
    cin >> rows;
    cout << "Enter the matrix columns: ";
    cin >> columns;
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++){
        matrix[i] = (int*)malloc(columns * sizeof(int));
        for (int j = 0; j < columns; j++)
        {
            cout << "Insert the["<<i<<"]["<< j<<"] elements of the matrix01:"<<endl;
            cin >> matrix[i][j];
        }
    }
    int** matrix02 = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        matrix02[i] = (int*)malloc(columns * sizeof(int));
        for (int j = 0; j < columns; j++)
        {
            cout << "Insert the["<<i<<"]["<< j<<"] elements of the matrix02:"<<endl;
            cin >> matrix02[i][j];
        }
    }
    int** matrixSoma = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        matrixSoma[i] = (int*)malloc(columns * sizeof(int));
        for (int j = 0; j < columns; j++)
        {
            matrixSoma[i][j] = matrix02[i][j] + matrix[i][j];
        }
        
    }

    cout<<"-=matrix01=-"<<endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++)
        {
            cout<< matrix[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<"-=-=-=-"<<endl;
    cout<<"-=matrix02=-"<<endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++)
        {
            cout<< matrix02[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<"-=matrixSoma=-"<<endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++)
        {
            cout<< matrixSoma[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<"-=-=-=-"<<endl;    
}
void Desafio02::ex08()const{
 bool stop = false;
 int again;
 while (!stop)
 {
    int n;
    cout << "Enter the vector size: ";
    cin >> n;
    int* vector = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Inset ["<< i <<"] element: ";
        cin >> vector[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout <<"Vector["<<i<<"] = " << vector[i] << endl;
    }
    delete []vector;
    cout <<"Want to create another vector?"<<endl<<"type it 1-yes or 2-no : ";
    cin >> again;
    if (again == 2)
    {
        stop = true;
    }
    
 }
}
void Desafio02::ex09()const{
    int *p1 = new int;
    int *p2 = new int;
    float *p3 = new float;

    cout<<"idade 01?: ";
    cin >> *p1;
    cout<<"idade 02?: ";
    cin >> *p2;
    *p3 = (*p1 + *p2)/2;
    cout << "Media = "<< *p3<<endl;
}
int* Desafio02::ex010(int* &p,int* &q){
    cout <<"-=-=ANTES-=-=-="<<endl;
    cout <<"*p = "<<*p<<" *q = "<< *q<<endl;
    cout <<"p = "<<p<<" q = "<< q<<endl;
    int temp  = *p;
    *p = *q;
    *q = temp;
    cout << endl <<"-=-=DEPOIS-=-=-="<<endl;
    cout <<"*p = "<<*p<<" *q = "<< *q<<endl;
    cout <<"p = "<<p<<" q = "<< q<<endl;
    return 0;
}