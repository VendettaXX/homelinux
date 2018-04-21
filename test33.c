#include <stdio.h>
int main(void)
{
    for (int i=0;i<5;i++)
    {
        static int s=1;
        s=2;
    }
}
