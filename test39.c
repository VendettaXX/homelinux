#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int mb=0;
    while(malloc(1<<20)!=NULL)
    {
        mb++;
    }
    printf("%d",mb);
    return 1;
}
