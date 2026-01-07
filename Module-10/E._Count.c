#include<stdio.h>
int main()
{
    char s[1000001];
    scanf("%s",&s);
    int sum=0;
    for(int i=0;i<strlen(s);i++)
    {
        sum=sum+(s[i]-'0');
    }
    printf("%d",sum);
    return 0;
}


///strlen(s) → ei function ta s string-er length dey.
///ধরা যাক input "12345", তাহলে strlen(s) = 5.

///for(int i=0; i<strlen(s); i++) → মানে i = 0 থেকে i < 5 পর্যন্ত loop চলবে,
///অর্থাৎ i = 0,1,2,3,4 — মোট ৫ বার চলবে।

///s[i] মানে string-এর i-number character, যেমন:

///s[0] = '1'

///s[1] = '2'

///s[2] = '3'
///ইত্যাদি।

///s[i] - '0' → এটা খুব important 🔥
///এখানে '1', '2' এগুলো character, কিন্তু তুমি চাইছো তাদের digit মান (সংখ্যা)।

///ASCII table অনুযায়ী:

///'0' = 48

///'1' = 49

///'2' = 50

///'3 ' = 51
///তাই '3' - '0' = 51 - 48 = 3

///মানে এটা character থেকে real number বানায়।

///sum = sum + (s[i] - '0');
///মানে প্রত্যেকটা digit যোগ হচ্ছে sum এর সাথে।
///যদি "12345" ইনপুট দাও, তাহলে sum হবে
///1 + 2 + 3 + 4 + 5 = 15

