#include<stdio.h>
int siter(int,int ,int);
int main()
{
    int p,t,r;
    float si;
    printf("Enter the pricipal time and rate");
    scanf("%d %d %d",&p,&t,&r);
    si=siter(p,t,r);
    printf("Simple Intrest %f",si);
    return 0;
}
int siter(int p,int t,int r)
{
    float s;
    s=(p*t*r)/100;
    return s;
}
