#include <iostream>
#define NDEBUG
#include <cassert>
using namespace std;
int main(void)
{
    bool  a=true;
    assert(a);
    cout << "assert failed"<< endl;
}
