// Input: nums = [1,1,2]
// Output:
// [[1,1,2],
//  [1,2,1],
//  [2,1,1]]

#include <bits/stdc++.h>
using namespace std;
void permute(vector<int> &arr, vector<vector<int>> &ans,  int index)
{

    vector<bool> use(21, 0);
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
        if (use[arr[i] + 10] == 0)
        {
            swap(arr[i], arr[index]);
            permute(arr, ans, index + 1);
            swap(arr[i], arr[index]);
            use[arr[i] + 10] = 1;
        }
    }
}

int main()
{
    vector<int> arr = {1, 1, 2};
    vector<vector<int>> ans;
    permute(arr, ans,   0);
    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}