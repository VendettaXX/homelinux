#include <stdio.h>
#include <unistd.h>
int main(void)
{
    unsigned i;
    for(i=9;i>=0;i--)
    {
        printf("%u\n",i);
        sleep(1);
    }
}
