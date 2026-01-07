#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

  

    int Capital = 0, Small = 0, Spaces = 0;
    for (int i = 0; s[i]!= '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            Capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            Small++;
        }
        else if (s[i] == ' ')
        {
            Spaces++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",Capital,Small,Spaces);
    return 0;
}