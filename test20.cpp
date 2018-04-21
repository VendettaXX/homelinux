#include <iostream>
using namespace std;
class Cstu{
    public:
        Cstu(){

        }
        Cstu(const Cstu & a){

        }
};
int main()
{
    Cstu st1;
   // Cstu st2(st1);
    Cstu st2=Cstu(st1);
    return 0;

}
