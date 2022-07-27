#include<stdio.h>
void primeF(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    primeF(n);
    return 0;
}
void primeF(int n)
{
    int i=2;
    while(n>1)
    {
        if(n%i==0)
        {

            printf("%d ",i);
            n=n/i;
            }
    else i++;
    }
}
