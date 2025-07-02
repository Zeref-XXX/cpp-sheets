#include <bits/stdc++.h>
using namespace std;

void subSetSum(vector<int>&arr,int start,int n,vector<vector<int>>&ans,vector<int>temp,int sum){
     if(start==n){
        ans.push_back(temp);
        // cout<<sum<<" "<<endl;
        return ;
    }
    //no
    subSetSum(arr,start+1,arr.size(),ans,temp, sum);
    //yes
    temp.push_back(arr[start]);
    subSetSum(arr,start+1,arr.size(),ans,temp, sum+arr[start]);
}
int main()
{
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    int sum=0;
    subSetSum(arr,0,arr.size(),ans,temp,sum);
    for(int i=0;i<ans.size();i++){
        int result=0;
        cout<<"{ ";
        for(int j=0;j<ans[i].size();j++){
            cout <<ans[i][j]<<" ";
            result+=ans[i][j];
        }
        cout<<"} :"<<result<<endl;
    }
}