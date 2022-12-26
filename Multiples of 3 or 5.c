Problem Description: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>
int main()
{
    int sum=0; //intializing a variable sum to zero
    for (int i=1;i<1000;i++) //iterating over the value of i from 1 to 1000
    {
        if( i%3==0 || i%5 ==0 ) //checking if i is the factor of 3 or 5
        {
            sum=sum+i; //if i is a factor of either 3 or 5, then value of sum is updated i.e sum+i
        }
    }
    printf("Sum of all multiples of 3 or 5 below 1000 is: %d\n", sum);
    return 0;
}
