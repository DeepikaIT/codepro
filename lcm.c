
#include <stdio.h>
int main()
{
    int a1, a2, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a1, &a2);
       minMultiple = (a1>a2) ? a1 : a2;
       while(1)
    {
        if( minMultiple%a1==0 && minMultiple%a2==0 )
        {
            printf("The LCM of %d and %d is %d.", a1, a2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
