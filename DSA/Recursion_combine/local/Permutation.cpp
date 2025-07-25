#include <bits/stdc++.h>
using namespace std;

void permut(int arr[], vector<vector<int>> &ans, vector<int> temp, vector<bool> visited)
{
    if(temp.size()==visited.size()){
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            visited[i]=1;
            temp.push_back(arr[i]);
            permut(arr,ans,temp,visited);
            temp.pop_back();
            visited[i]=0;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(3, 0);
    permut(arr, ans, temp, visited);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}