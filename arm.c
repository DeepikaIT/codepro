#include <stdio.h>
int main()
{
    int no originalno,remainderesult = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &no;
    originalNo= no
    while (originalN0= 0)
    {
        remainder = originalNo10;
        result += remainder*remainder*remainder;
        originalNo/= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",no;
    else
        printf("%d is not an Armstrong number.",no;
    return 0;
}
