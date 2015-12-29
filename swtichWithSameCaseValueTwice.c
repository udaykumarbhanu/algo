#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 10;
    switch(n)
    {
        case 10:
            printf("%d", n);
            break;
        case 8+2:
            printf("%d", n);
        case 9+1:
            printf("%d", n);
            break;

    }
    printf("Hello from end \n");
    return 0;
}
