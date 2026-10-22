#include <stdio.h>
int main(void)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        static int x = 5;
        int y=5;
        x++;
        y++;
        printf("%d %d\n", x,y);
    }
    return 0;
}
