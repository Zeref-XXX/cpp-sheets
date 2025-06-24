
// Given an array arr[]. The task is to find the largest element and return it.

// Examples:

// Input: arr[] = [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of the given array is 90.

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // linera
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max) max=arr[i];
        }
        return max;
     
        }
};
