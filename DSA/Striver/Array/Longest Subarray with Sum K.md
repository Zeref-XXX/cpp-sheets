Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.

Examples:
Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
Output: 6
Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.

```pre
1. generate all subarrays [o(n^3)]
2.
```

```cpp
for(i=0 -> n)
    for(j=i ->n )
        if currentLen=k then maxL= max(maxL,currentLen)

----TLE
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int len=0; 
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j]; 
    			if(sum==k){
    				len=max(len,j-i+1);
    			}	
            }
        }
        return len;
    }
};

```
---
