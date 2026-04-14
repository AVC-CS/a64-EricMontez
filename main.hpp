#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

void swapValues(int &n1, int &n2)
{
    // TODO
    swap(n1, n2);
    // END TODO
}

void swapValues(int &n1, int &n2, int &n3)
{
    // TODO
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = n3;
    n3 = tmp;
    // END TODO
}

void swapValues(int &n1, int &n2, int &n3, int &n4)
{
    // TODO
    swap(n1, n4);
    swap(n2, n3);
    // END TODO
}
