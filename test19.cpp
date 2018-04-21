#include <iostream>
using namespace std;
class Base{
    public:
       static int a;
};
//int Base::a=13;
int main(void)
{
    cout << Base::a <<endl;
}
