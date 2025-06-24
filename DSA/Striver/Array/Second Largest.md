Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

```cpp
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=-1;
        int smax=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max) {
                smax=max;
                max=arr[i];
            }
            else if(arr[i]>smax && arr[i]<max) smax=arr[i];
        }
        return smax;
    }
};