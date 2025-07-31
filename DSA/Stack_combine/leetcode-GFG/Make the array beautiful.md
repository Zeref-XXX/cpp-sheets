
```cpp
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(st.empty())  st.push(arr[i]); //empty
            
            else if(arr[i]>=0){  //non negative
                if(st.top()>=0)st.push(arr[i]);
                else st.pop();
            }
            else{ // 
                if(st.top()<0) st.push(arr[i]);
                else st.pop();
            }
        }
        int n=st.size();
        vector<int>ans(n);
        while(!st.empty()){
            ans[--n]=st.top();
            st.pop();
        } 
        return ans;
        
    }
};