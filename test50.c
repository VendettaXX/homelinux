#include <stdio.h>
int main(void)
{

    int b[100];
    fun (b);
    return 0;
}
int fun(int b[100])
{
    return sizeof(b);
}
