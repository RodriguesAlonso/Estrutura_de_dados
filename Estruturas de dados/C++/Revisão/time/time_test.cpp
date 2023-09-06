#include <iostream>
#include "time.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Time t1(12, 22, 55);
    Time t2(12);
    Time t3(23, 59, 58);

    t1.print();
    cout << t1.getHour() << ":" << t1.getMinute() << ":" << t1.getSecond();

    t2.print();
    t3.print();
    t3.nextSecond();
    t3.print();
    t3.nextSecond();
    t3.print();
}
