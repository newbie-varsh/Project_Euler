Problem Description: The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
  
#include <stdio.h>
int main()
{
    long int num=600851475143; //initializing the value of num to 600851475143
    printf("The largest prime factor of the number is: ");
    for(int i=2;i<=num;i++) //looping from i=2 till num;
    {
        if(num%i==0)//checking if i is factor of num
        {
            num=num/i; //if i is a multiple of num, then updating the value of num by decreasing i times.
            if (num==1) //if num==1, 
            {
                printf("%d ",i); //prints i(last i.e largest factor of num, before num turns to 1)
            }
        }
     }
    return 0;
}
