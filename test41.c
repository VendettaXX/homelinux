#include <stdio.h>
int main()
{
   FILE *pFile;//定义文件指针
   char str[]="What a wonderful world!";//需要输入的数据
   int size = sizeof(str);//用sizeof()函数得出数据的字节数
   pFile = fopen("test.txt", "w");
   if(pFile == NULL)//判断指针是否为空
   {
       printf("can not open the file");
       fclose(pFile);
       return 0;
   }
   fwrite(str,1,size,pFile);
   fclose(pFile);
   printf("%s\n",str);
   return 0;
}
