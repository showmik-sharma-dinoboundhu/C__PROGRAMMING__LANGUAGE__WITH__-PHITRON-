//what you can eat under 500+ dollar.. show it in a conditional program..

#include<stdio.h>
int main()
{
    int dollar;
    scanf("%d",&dollar);
    if(dollar >=500)
    {
        printf("You can eat a burger");
    }
    else if(dollar >=300)
    {
        printf("You can eat chicken fry");
    }
    else if(dollar >=200)
    {
        printf("You can eat bhat");
    }
    else if(dollar >=100)
    {
        printf("You can eat street food");
    }
    else if(dollar >=50)
    {
        printf("You can eat puchka");
    }
    else if(dollar >=10)
    {
        printf("Call a CNG driver and go home");
    }
    else
    {
        printf("Mara kha and then go home");
    }
    return 0;
}

///very Important: You need to take one integer value as input and tell if the value is positive or negative or zero.


#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>0)
    {
        printf("Postive");
    }
    else if (a<0)
    {
        printf("Negative");
    }
    else
    {
        printf("zero");
    }

    return 0;
}


