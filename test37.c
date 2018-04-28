#include <stdio.h>
int main(void)
{
    const char a[]="hello";
    *a='s';
    char *b ="hello";
    *b='s';
    const char *c="hello";
    *c='s';
    char d[]="hello";
    *d='s';

}
