//xuhanshu   fulei zhizhen  zhixiang zilei hanshu
#include <iostream>
using namespace std;
class CFather{
    public:
        virtual void show(){
            cout << "class CFather"<<endl;
        }
};
class CSon:public CFather{
    public:
        int aa;
         void show(){
            cout << "class CSon"<< endl;
        }
};
class CGrandson:public CSon{
    public:
        int bb;
        void show(){
            cout <<  "class CGrandson"<< endl;
        }
};
int main(){
    CFather *fa= new CFather;
    fa->show();
    CFather *fa1= new CGrandson;//fulei zhizhen  zhixiang zilei kongjian
    fa1->show();//putong de  zhineng diaoyong  fulei de chengyuan
    CFather *fa2=new CSon;
    fa2->show();
    CSon *son1 = new CGrandson;
    son1->show();
    delete fa1;
    delete fa2;
    delete son1;

    return 0;
}
