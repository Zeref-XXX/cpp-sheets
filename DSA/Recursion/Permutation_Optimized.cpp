#include <bits/stdc++.h>
using namespace std;
void permut(vector<int> &arr, vector<vector<int>> &ans, int index)
{
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
       swap(arr[i],arr[index]);
       permut(arr, ans, index+1);
       swap(arr[i],arr[index]);
    }
}

int main()
{
    vector<int> arr{1, 2, 3};
    vector<vector<int>> ans; 
    int index=0;
    permut(arr, ans, index);
    // cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}