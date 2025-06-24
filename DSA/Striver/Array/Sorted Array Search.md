Given an array, arr[] sorted in ascending order and an integer k. Return true if k is present in the array, otherwise, false.
```
Examples:
Input: arr[] = [1, 2, 3, 4, 6], k = 6
Output: true
Exlpanation: Since, 6 is present in the array at index 4 (0-based indexing), output is true.
```
```cpp
class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {
    //linear
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k) return true;
    }
    return false;
    }
    // Binary Search

    int start=0,end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k) return true;
        else if(arr[mid]>k)end=mid-1;
        else start=mid+1;
    }
    return false;
    }
};