Description : A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
  
#include <stdio.h>
int main()
{
  int largest_palindrome=0; //initializing a variable largest palindrome to 0
    for(int i=999;i>=100;i--) //running loop from i=999 to i=100 (3 digit values)
    {
        for(int j=999;j>=100;i--) //running loop from i=999 to i=100 (3 digit values)
        {
            int product = i*j; //finding their product
            int temp=product;
            int sum=0;
            while(temp>0) //finding the reverse number of the product to check if the product is a palindrome or not
            {
                int reminder = temp%10;
                sum=sum*10+reminder;
                temp=temp/10;
            }
            if ( sum == product ) //checking if the reverse of product is equal to the product (palindrome)
            {
                if(product > Largest_palindrome) // checking if the value of product is greater than largest_palindrome
                {
                    Largest_palindrome = product;
                }

            }
        }
    }
    printf("Largest value of palindrome - %d", highest_palindrome);
    return 0;
}
