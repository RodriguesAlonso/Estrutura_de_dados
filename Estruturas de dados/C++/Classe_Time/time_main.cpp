#include<iostream>
#include "time.h"
using std::cout;
using std::endl;

int main(){
Time t1(23,59,59);
cout << endl <<"---build---------" << endl;
t1.print();
t1.setHour(12);
t1.setMinute(30);
t1.setSecond(15);
cout << endl <<"---setters-------" << endl;
t1.print();
cout << endl <<"---getters-------" << endl;
    cout << "hour: " << t1.getHour() <<endl;
    cout << "minute: " << t1.getMinute() <<endl;
    cout << "second: " << t1.getSecond() <<endl;
    
cout << endl <<"---default-------" << endl;
Time t2(12);
t2.print();
cout << endl <<"---nextSecond 01-------" << endl;
Time t3(23,59,58);
t3.nextSecond();
t3.print();
cout << endl <<"---nextSecond 02-------" << endl;
t3.nextSecond();
t3.print();
return 0;
}