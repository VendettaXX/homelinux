#include <iostream>
using namespace std;
int main (void)
{
    int *a= new int[2];
    int *b=a;
    delete a;
    cout << "hello,world"<<endl;
    delete b;
    return 0;
}
