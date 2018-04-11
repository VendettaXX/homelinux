#include <iostream>
using namespace std;
class Base{
    public:
        Base(int a,int b);
        Base(int a,int b,int c);
};
Base::Base(int a,int b){
    cout<<a+b<<endl;
}
Base::Base(int a,int b,int c){
    cout<<a+b+c<<endl;
}
int main(void)
{
    Base a(1,2);
    Base b(1,2,3);
    return 1;
}
