Description:  The sum of the squares of the first ten natural numbers is 385,
The square of the sum of the first ten natural numbers is 3025,
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.



#include <stdio.h>
int main()
{
    int sum=0;
    int square_sum=0;
    for(int i=1; i<=100;i++)
    {
        sum=sum+i; //sum of the first 100 natural numbers
        square_sum=square_sum+(i*i); //square of the sum of the first 100 natural numbers
    }
    printf("%d\n", ((sum*sum) - square_sum)); //printing difference
}
