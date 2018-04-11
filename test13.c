#include  <stdio.h>
typedef int  (*ptrf)(int ,int);
int add(int ,int);
int sub(int,int);
int func1(ptrf a,int b,int c)
{
    return a(b,c);

}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",func1(add,1,2));
    printf("%d\n",func1(sub,1,2));
}
