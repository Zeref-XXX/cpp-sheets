#include <bits/stdc++.h>
using namespace std;

void subSetSum(vector<int> &arr, int start, int n, vector<vector<int>> &ans, vector<int> temp, int target, int sum)
{

    if (sum == target)
    {
        ans.push_back(temp);return;
    }
    if (start == n || sum> target)
    { 
        return;
    }

    // no
    subSetSum(arr, start + 1, arr.size(), ans, temp, target, sum);

    // yes
    temp.push_back(arr[start]);
    subSetSum(arr, start + 1, arr.size(), ans, temp, target, sum + arr[start]);
}

int main()
{
    vector<int> arr = {1, 2, 3, 5};
    vector<vector<int>> ans;
    vector<int> temp;
    int target = 6;
    int sum = 0;
    subSetSum(arr, 0, arr.size(), ans, temp, target, sum);

    for (int i = 0; i < ans.size(); i++)
    {  
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " "; 
        }
        cout<<endl;  
    }
    return 0;
}