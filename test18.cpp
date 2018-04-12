#include <iostream>
using namespace std;
class Base{
    public:
        int a;
        Base(int a){
            this->a=a;
            this->show();
        }
        void show(){
            cout  << a<< endl;
        }
};
int main()
{
    Base *a=new Base(10);
    delete a;
    return 1;
}
