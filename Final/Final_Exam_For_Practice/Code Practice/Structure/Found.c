#include<stdio.h>
struct car
{
    char name[100]; int year; double price;
};
void display(struct car c[])
{
    int max = 0;
    for(int i=0;i<3;i++)
    {
        if(c[i].price > c[max].price)
            max = i;
    }
    printf("%s %d %lf", c[max].name, c[max].year, c[max].price);
}
int main()
{
    struct car c[3];
    for(int i=0;i<3;i++)
    {
        scanf("%s %d %lf",c[i].name, &c[i].year, &c[i].price);
    } 
    display(c);
    return 0;
}
