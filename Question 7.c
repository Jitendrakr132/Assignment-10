#include<stdio.h>
int comb(int ,int);
int main()
{
    int n,r,c;
    printf("Enter the n item ");
    scanf("%d",&n);
    printf("Enter the r seletec at time");
    scanf("%d",&r);
    c=comb(n,r);
    printf("Combination of %d",c);
 return 0;
}
int comb(int n,int r)
{
    int i=1,f=1;
    int s,nomi,demi,cobminat=0;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    nomi=f;
    s=n-r;
    while(i<=s)
    {
        f=f*i;
        i++;
    }
    demi=s;

    cobminat=nomi/demi;
    return cobminat;
}
