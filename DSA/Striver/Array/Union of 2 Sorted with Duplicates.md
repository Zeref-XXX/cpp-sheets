Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.
```
Examples:
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: 1 2 3 4 5 6 7
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
```

```cpp
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        set<int>s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        vector<int>v(s.begin(),s.end());
        return v;
        // return vector with correct order of elements
    }
};
```

```cpp
class Solution {
  public:

        int i=0,j=0;
        vector<int>temp;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                if(temp.empty()|| a[i]!=temp.back())temp.push_back(a[i]);i++;
            }
            else {
                if(temp.empty() || temp.back()!=b[j]) temp.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            if(temp.back()!=a[i]) temp.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            if(temp.back()!=b[j]) temp.push_back(b[j]);
            j++;
        }
        return temp;
    
};