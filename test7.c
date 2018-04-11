#include <stdio.h>
#include <stdlib.h>
int k1 = 1;
int k2;
static int k3 = 2;
static int k4;
int main( )
{  static int m1=2, m2;
    int i=1;
    char *p;
    int a[3]={0,1,2};
    char str[10] = "hello";
    char* q = "hello";
    p= (char *)malloc( 100 );
    free(p);
    printf("栈区-变量地址  i：%p\n", &i);
    printf("                p：%p\n", &p);
    printf("              str：%p\n", str);
    printf("                q：%p\n", &q);
    printf("              a[0]:%p\n", &a[0]);
    printf("              a[1]:%p\n", &a[1]);
    printf("              a[2]:%p\n", &a[2]);
    printf("              a[3]:%p\n", &a[3]);
    printf("堆区地址-动态申请：%p\n", p);
    printf("全局外部有初值 k1：%p\n", &k1);
    printf("    外部无初值 k2：%p\n", &k2);
    printf("静态外部有初值 k3：%p\n", &k3);
    printf("    外静无初值 k4：%p\n", &k4);
    printf("  内静态有初值 m1：%p\n", &m1);
    printf("  内静态无初值 m2：%p\n", &m2);
    printf("文字常量地址    ：%p, %s\n",q, q);
    printf("程序区地址      ：%p\n",&main);
    return 0;
}
