#include<stdio.h>
#include<stdlib.h>

int fibonacciRecur(int input)
{
    //base case
    if(input<=1)
    {
        return input;
    }
    // recursion case
    else
    {
        return fibonacciRecur(input-1)+fibonacciRecur(input-2);
    }
}

int main()
{
    int i, input=10;
    // output
    for(i=0; i<=input; i++)
    {
        printf("%d ", fibonacciRecur(i));
    }

    printf("\n");
    return 0;
}
