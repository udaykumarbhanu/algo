// Problem: Search in a row wise and column wise sorted matrix
#include<stdio.h>
#include<stdlib.h>

void search(int mat[][4], int size, int key)
{
    // pointing to top right element.
    int i=0;
    int j=size-1;
    while(i<size && j>=0)
    {
        if(mat[i][j]==key)
        {
            printf("\n %d Key is found at %d %d\n", key, i, j);
                return;
        }
        else if(mat[i][j]>key)
        {
            j--;
        }
        else // for mat[i][j]<key
        {
            i++;
        }
    }
    //for not getting element
    printf("\n Key is not found in the matrix \n");
    return 0;
}

int main()
{
    int key = 30;
    int size = 4;
    int mat[4][4] = {
                    {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                    };
    search(mat, size, key);
    return 0;
}
