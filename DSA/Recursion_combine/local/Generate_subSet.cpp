#include <bits/stdc++.h>
using namespace std;

void subSeq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp){
    
    if(index==n){
        ans.push_back(temp);
        return ;
    }
    //no
    subSeq(arr,index+1,n,ans,temp);
    //yes
    temp.push_back(arr[index]);
    subSeq(arr,index+1,n,ans,temp);
}

int main()
{
    int arr[]={1,2,3};
     vector<vector<int>>ans;
     vector<int>temp;

     subSeq(arr,0,3,ans,temp);

     for(int i=0;i<ans.size();i++){
        cout<<"{ ";
        for(int j=0;j<ans[i].size();j++){
            cout<<  ans[i][j]<<" ";
        }
        cout<<"} "<<endl;
     }

}