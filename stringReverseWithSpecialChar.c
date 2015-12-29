#include<stdio.h>
#include<stdlib.h>

// alphabet checking
int isAlpha(char x)
{
    if((x>='a' && x<='z') ||(x>='A' && x<='Z'))
        return 1;
    else
        return 0;
}

void swap(char *a, char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

// string reverse function without special character
/*
void reverse(char input[])
{
    int l=0, r=sizeof(input)-1;
    while(l<r)
    {
        if(input[l]!=input[r])
        {
            swap(&input[l], &input[r]);
            r--;
            l++;
        }
        r--;
        l++;
    }
}

*/
void reverse(char input[])
{
    int l=0, r=sizeof(input)-1;

    while(l<r)
    {
        //if the character is special character from left side of the string
        if(!(isAlpha(input[l])))
            l++;

        //if the character is special character from right side of the string
        else if(!(isAlpha(input[r])))
            r--;
        // for non special character swap the character
        else
        {
            swap(&input[l], &input[r]);
            r--;
            l++;
        }
        r--;
        l++;
    }
}

int main()
{
    char input[] = "u,d,!& a9y";
    printf("Given string is %s\n", input);

    reverse(&input);
    printf("Reversed string is %s\n", input);
    return 0;
}
