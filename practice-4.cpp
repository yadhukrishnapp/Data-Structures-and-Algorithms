#include<bits/stdc++.h>

using namespace std;

void sortArray(int arr[], int n)
{
    // Sorted array must be : 0 0 1 2 2

    int start = 0;
    int mid = 0;
    int end = n-1;

    while(mid <= end)
    {
        if(arr[mid] == 0)
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else{
            swap(arr[end], arr[mid]);
            end--;
        }
    }
}

int main()
{
    int arr[] = {0, 2, 1, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}