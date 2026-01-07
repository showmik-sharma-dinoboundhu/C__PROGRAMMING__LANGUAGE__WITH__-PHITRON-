//One friend asking to other that if he wants to go cox'sbazar?.. then other one saying that if he has 5000 tk then he will go to cox'sbazar and after if he has 10000+ tk then he will go to saintmartin also and go to boayalkhali.. Otherwise he will not..

#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk>=5000)
    {
        printf("Cox'sBazar \n");

        if(tk>=10000)
        {
            printf("Saintmartin \n");
        }
        else
        {
            printf("Can't go \n");
        }
    }
    else
    {
        printf("Imposible \n");
    }

    return 0;
}
