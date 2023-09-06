#include <iostream>
#include "time.h"

using namespace std;

int main()
{
    Time t1(12, 45, 13);
    t1.print();
    cout << endl;
    Time t2(0,12);
    t2.print();
    cout << endl;
    Time t3(23, 58,12);
    t3.nextMinute();
    t3.print();
    cout << endl;
    t3.nextMinute();
    t3.print();
    return 0;
}
