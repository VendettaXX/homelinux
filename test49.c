#include <stdio.h>
int main(void)
{
    int *p=NULL;
    sizeof(p);
    sizeof(*p);
    int a[100];
    sizeof(a);
    sizeof(a[100]);
    sizeof(&a);
    sizeof(&a[0]);
}
