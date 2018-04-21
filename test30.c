#include <stdio.h>
int  main(void)
{
    int a[100000],*b;
    for(b=a;b<a+100000;b++){
        *b=0;
    }
}
