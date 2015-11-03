#include<stdio.h>
#include<stdlib.h>

void search(int *arr, int low, int high)
{
    int mid = (low+high)/2;

     // Base cases
    if (low > high)
       return;

    if (low==high)
    {
        printf("The required element is %d ", arr[low]);
        return;
    }

    if (mid%2 == 0)
    {
        if (arr[mid] == arr[mid+1])
            search(arr, mid+2, high);
        else
            search(arr, low, mid);
    }
    else
    {
        if (arr[mid] == arr[mid-1])
            search(arr, mid+1, high);
        else
            search(arr, low, mid-1);
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40};
    int len = sizeof(arr)/sizeof(arr[0]);

    search(arr, 0, len-1);

    return 0;
}
