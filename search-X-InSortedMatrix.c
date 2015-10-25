#include<stdio.h>
#include<stdlib.h>

int search(int a[][4], int size, int key)
{
    //setting row and column
    int row=0, col=size-1;
    while(row<size && col>=0)
    {
        if(a[row][col]==key)
        {
            printf("\n Key is found at %d, %d\n", row,col);
            return 1;
        }
        else if(a[row][col]>key)
        {
            col=col-1;
        }
        else
        row=row+1;
    }
    //row=size and column=0, key is not present.
    printf("\n Key not found!");
}

int main()
{
    int key=10;
    int mat[][4]={ {1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}
    };

    search(mat, 4, key);
    return 0;
}
