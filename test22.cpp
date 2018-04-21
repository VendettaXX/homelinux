#include <iostream>
using namespace std;
class CFather{
    public:
        int a;
        CFather(){
            a=12;
        }

};
class CSon:public CFather
{
    public:
        int a;
        CSon(){
            a=10;
        }

};
int main(void)
{
    CSon so;
    cout <<  so.a<< endl;
    cout <<  so.CFather::a<<endl;
}
