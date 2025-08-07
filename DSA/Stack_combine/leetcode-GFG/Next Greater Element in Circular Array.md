Given a circular integer array arr[], the task is to determine the next greater element (NGE) for each element in the array.  
The next greater element of an element arr[i] is the first element that is greater than arr[i] when traversing circularly. If no such element exists, return -1 for that position.  
Circular Property:  
Since the array is circular, after reaching the last element, the search continues from the beginning until we have looked at all elements once.


```cpp
class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        int size=arr.size();
        vector<int>ans(size,-1);
        stack<int>st;
        for(int i=2*size-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i%size])
                st.pop();
            if(i<size )
                ans[i]=st.empty()? -1 :st.top();
            st.push(arr[i%size]);
        }
        return ans;
    }
};
```