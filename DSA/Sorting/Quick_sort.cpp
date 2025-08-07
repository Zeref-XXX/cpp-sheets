#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int start,int end)
{
    int pos=start;
    int pivot=arr[end];
    for(int i=start;i<=end;i++){
        if(arr[i]<pivot){
            swap(arr[i],arr[pos]);
            pos++;
        }
    } 
    swap(arr[pos], arr[end]);
    return pos;
}
//  [4, 1, 3, 9, 7]
void quickSort(vector<int> &arr, int start, int end)
{
    if(start>=end) return;
    int pivot=partition(arr,start,end);
    // cout<<"-"<<pivot<<"-";
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    cout<<endl;
}