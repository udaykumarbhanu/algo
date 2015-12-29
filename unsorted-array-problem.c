#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
// C++ program to find the element which is greater than
// all left elements and smaller than all right elements.

int findElement(int arr[], int n)
{
    // leftMax[i] stores maximum of arr[0..i-1]
    int leftMax[n];
    leftMax[0] = INT_MIN;

    // Fill leftMax[]1..n-1]
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i-1], arr[i-1]);

    // Initialize minimum from right
    int rightMin = INT_MAX;

    // Traverse array from right
    for (int i=n-1; i>=0; i--)
    {
        // Check if we found a required element
        if (leftMax[i] < arr[i] && rightMin > arr[i])
             return i;

        // Update right minimum
        rightMin = min(rightMin, arr[i]);
    }

    // If there was no element matching criteria
    return -1;
}

int main()
{
    int a[]={5, 1, 4, 3, 6, 8, 10, 7, 9};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\n Index of found element is %d\n", findElement(a, n));
    return 0;
}
