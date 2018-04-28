/****************************************
*  File Name  : string.c
*  Creat Data : 2015.1.19
*  Author     : ZY
*****************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char string1[10] = "", string2[10] = "";
    int r;
    while ( string1[0] != 'Z')
    {
        gets(string1);
        r = strcmp(string1,string2);  //r记录的是判断string1和string2是否相等
        if (!r)
        {
            printf("\n");
            puts(string1);
            printf("\n");
        }
        strcpy(string2 , string1);   //将string1 中的字符串拷贝到string2中
    }
    return 0;
}
