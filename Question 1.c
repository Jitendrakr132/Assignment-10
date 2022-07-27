#include<stdio.h>
int aoc(int );
int main()
{
    int r;
    float area;
    printf("Enter the radius");
    scanf("%d",&r);
    area=aoc(r);
    printf("Area of circle %f",area);
    return 0;

}
int aoc(int r)
{
    float circle;
    circle=3.14*r*r;
    return (circle);
}
