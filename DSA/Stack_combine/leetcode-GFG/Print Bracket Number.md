// User function template for C++

```cpp
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        vector<int>ans;
        stack<int>st;
        int count=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if(str[i]==')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};