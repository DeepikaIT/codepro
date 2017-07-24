 
#include <stdio.h>
 int main()
{
    int i, number1, number2, min, hcf=1;
          printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &number1, &number2);
      min = (number1<number2) ? number1 : number2;
 
    for(i=1; i<=min; i++)
    {
                         if(number1%i==0 && number2%i==0)
        {
            hcf = i;
        }
    }
 
    printf("HCF of %d and %d = %d\n", number1, number2, hcf);
    return 0;
}
