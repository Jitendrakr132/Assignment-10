#include<stdio.h>
int EvenOodd(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(EvenOodd(n)%2)
        printf("Even number");
    else
        printf("odd number");
}
int EvenOodd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
