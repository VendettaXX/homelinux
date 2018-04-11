#include <stdio.h>

int * array(void)
{
    static int a[10]={1,2,3,4,5,6,7,8,9,10};
    return a;
}
int main(void)
{
    int * b=array();

    for (int i=0;i<10;i++){

         printf("%d,",b[i]);
    }
}
