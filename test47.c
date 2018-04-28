#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int ch;
    ch=getchar();
    if (ch==EOF)
    {
        exit(-1);
    }
    if (ch>='a'&&ch<='z')
    {
        putchar(ch-32);
    }
    else{
        putchar(ch);
    }
}
