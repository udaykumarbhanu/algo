#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort012(int *arr, int arr_size)
{
    int low = 0;
    int high = arr_size - 1;
    int mid = 0;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(&arr[low++], &arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&arr[mid], &arr[high--]);
            break;
        }
    }
}

 void printArray(int *arr, int arr_size)
 {
    int i=0;
    for(i=0; i<arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");
 }

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Array Before sorting:\n ");
    printArray(arr, arr_size);

    sort012(arr, arr_size);

    printf("Array after segregation:\n");
    printArray(arr, arr_size);

    return 0;
}
