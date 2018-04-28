#include <stdio.h>
char *str="test";
void core_test()
{
    str[1]='t';
}
int main()
{
    core_test();
    return 0;
}
