#include<stdio.h>
void print(int);
int main()
{
    int n;
    print(n);
    return 0;
}
void print(int n)
{
    int i=1,f=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("%d ",f);
}

