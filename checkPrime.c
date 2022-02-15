#include <stdio.h>
int checkPrime(int x, int y){
    if (y==1)
    {
        return 1;
    }
    else
    {
       if (x%y==0)
       {
         return 0;
       }
       else
       {
         return checkPrime(x,y-1);
       }       
    }
}
int main()
{
    int a,count;
    printf("Enter a number to check whether it's prime or not : ");
    scanf("%d", &a);
    count = checkPrime(a,a/ 2);
    if (count == 1)
    {
        printf("%d is a prime number\n",a);
    }
    else
    {
        printf("%d is not a prime number\n",a);
    }

    return 0;
}
