#include <stdio.h>
#include <stdlib.h>
int * array(void)
{
    int *a=(int *)(malloc(10*sizeof(int)));
        for(int i=0;i<10;i++){
            a[i]=i;
        }
    return a;
}
int main(void)
{
    int *b=array();
    for(int i=0;i<10;i++){
        printf("%d",b[i]);
    }
}
