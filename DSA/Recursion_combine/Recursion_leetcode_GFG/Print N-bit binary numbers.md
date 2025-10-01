Given a positive integer n. Your task is to generate a string list of all n-bit binary numbers where, for any prefix of the number, there are more or an equal number of 1's than 0's. The numbers should be sorted in decreasing order of magnitude.

    Input:  
    n = 2
    Output: 
    {"11", "10"}
    Explanation: Valid numbers are those where each prefix has more 1s than 0s:
    11: all its prefixes (1 and 11) have more 1s than 0s.
    10: all its prefixes (1 and 10) have more 1s than 0s.
    So, the output is "11, 10".
    
```cpp
// User function template for C++
class Solution {
  public:
  
    void find(int n,vector<string>&ans,string &temp,int zero,int one){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back('1');
        find(n,ans,temp,zero,one+1);
        temp.pop_back();
        if(zero<one){
            temp.push_back('0');
             find(n,ans,temp,zero+1,one);
             temp.pop_back();
        }
    }
  
    vector<string> NBitBinary(int n) {
    vector<string>ans;
    string temp;
    
    find(n,ans,temp,0,0);
    return ans;
    }
};
```