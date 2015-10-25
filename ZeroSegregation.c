#include<stdio.h>
#include<stdlib.h>

void pushZeroToEnd(int a[], int n)
{
    int count=0, i;
    //first fill all non zero element to array.
    for(i=0; i<n; i++)
        if(a[i]!=0)
            a[count++]=a[i];

    //at end insert zero to array.
    while(count<n)
        a[count++]=0;
}

void printArray(int *a, int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
}

int main()
{
    int a[]={1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n=sizeof(a)/sizeof(a[0]);

    printf("\n Elements of array Before segregating Zero is: \n");
    printArray(a, n);

    pushZeroToEnd(&a, n);

    printf("\n Elements of array After segregating Zero is: \n");
    printArray(a, n);
    return 0;
}
