#include<stdio.h>
int cont(char );
int main()
{
    char ch;
    printf("Enter the number");
    scanf("%c",&ch);
        if(cont(ch))
        return 1;
        else
            return 0;

}
int cont(char n)
{
    if(n>='0' && n<='9')
        printf("Digit");
    else
        printf("NOt digit");
}
