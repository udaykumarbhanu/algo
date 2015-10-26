#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{
    //base case
    if(n<=1)
        return n;
    //recursive case
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}

int main()
{
    int n=9, i=0;

    for(i=0; i<=n; i++)
        printf("\n %d\n", fibonacci(i));
    return 0;
}
