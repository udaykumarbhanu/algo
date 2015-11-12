#include<stdio.h>
#include<stdlib.h>

int prime(int num)
{
    int i;
    if(num<=1) // to avoid negative and number 1 as input
        return 0;

    for(i=2; i<=sqrt(num); i++)
    {
        if(num%i == 0)
            return 0; //Not a prime
    }
    return 1; //prime number
}

int main()
{
    int num;
    int result;
    printf("\n Enter a number to check if its prime or not: ");
    scanf("%d", &num);

    result = prime(num); //function call

    if(result == 1)
        printf("\n %d is a Prime number \n", num);
    else
         printf("\n %d is Not a prime number \n", num);

    return 0;
}
