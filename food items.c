#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1 : printf("Food item - pizza\nPrice - Rs:239");
            break;
        case 2 : printf("Food item - Burger\nPrice - Rs:129");
            break;
        case 3 : printf("Food item - Pasta\nPrice - Rs:179");
            break;
        case 4 : printf("Food item - French Fries\nPrice - Rs:99");
            break;
        case 5 : printf("Food item - Sandwich\nPrice - Rs:149");
            break;
        default : printf("Entered number not in the list");
            break;
    }
    return 0;
}
