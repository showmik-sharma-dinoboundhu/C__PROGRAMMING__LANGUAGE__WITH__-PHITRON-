#include <stdio.h>
void world()
{
    printf("world\n");
}
void hello()
{
    printf("Hello\n");
    world();
}
int main()
{
    // 	printf("End ");
    hello();
    printf("End\n");
    return 0;
}
