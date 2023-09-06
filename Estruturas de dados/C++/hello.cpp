#include <iostream>

using std::cout;
using std::cin;
using std::endl;
const int TOTAL = 20;
int main()
{
    int c[TOTAL];
    for (int i = 0; i < TOTAL; i++){
        c[i] = i*2;
        //cout << "I: "<< i <<endl;
        //cout << "C: " << c[i] <<endl;
        
    }
    for (int i = 0; i < TOTAL; i++)
    {
        cout << " vetor c :" << c[i]<<endl;
        
    }
    
    


    return 0;
}
