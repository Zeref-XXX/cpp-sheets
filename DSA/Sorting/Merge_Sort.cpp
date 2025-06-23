#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int start, int mid, int end)
{
    int size = end - start + 1;

    int left = start;
    int right = mid + 1;

    int temp[size];
    int index = 0;
    while (left <= mid && right <= end)
    {
        // if (arr[left] >= arr[right]) //for non increasing order
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            left++;
            index++;
        }
        else
        {
            temp[index] = arr[right];
            right++;
            index++;
        }
    }
    while (left <= mid)
    {
        temp[index] = arr[left];
        left++;
        index++;
    }
    while (right <= end)
    {
        temp[index] = arr[right];
        right++;
        index++;
    }
    //copying back
    for(int i=0;i<size;i++){
        arr[i+start]=temp[i];
    }
}

void MergeSort(int *arr, int start, int end)
{

    if (start >= end)
        return;
    int mid = start + (end - start) / 2;

    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);

    Merge(arr, start, mid, end);
}

int main()
{
    int arr[8] = {34, 1, 45, 67, 34, 45, 60, 32};

    MergeSort(arr, 0, 7);

    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";

    cout << endl;
}