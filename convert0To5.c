// Given a integer as a input and replace all the ‘0’ with ‘5’ in the integer.

#include<stdio.h>
#include<stdlib.h>

int convert0To5Rec(int num)
{
    if(num==0) //base case
        return num;
    //converting last digit if that is 0
    int digit = num%10;
    if(digit==0)
        digit = 5;
    //converting all the remaining digit if they are 0 to 5 using recursion
    return convert0To5Rec(num/10)*10 + digit;

}

int convert0To5(int num)
{
    if(num==0) //if given number is only 0
        return 5;
    else
       return convert0To5Rec(num);

}
int main()
{
    int num = 1012010280;
    printf("\n %d", convert0To5(num));
    return 0;
}
