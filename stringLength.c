#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[]="String";
    int i=0, len=0;
    for(i=0; i<str[i]!='\0'; i++)
        len+=1;

    printf("\n Given string is: %s which is of length: %d\n", str, len);
    return 0;
}
