#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,c;
    for(b=0;b<6;b++)
    {
        for(c=0;c<=b;c++)
        {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
