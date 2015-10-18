#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void removeSpace(char *str)
{
    int count =0;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[count++]=str[i];
        }
    }
    str[count]='\0';
}

int main()
{
    char input[]="This is a test string";
    printf("The string before removing spaces: %s", input);
    removeSpace(&input);
    printf("\n");
    printf("The string after removing spaces: %s", input);
    return 0;
}
