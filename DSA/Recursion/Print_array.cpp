#include <bits/stdc++.h>
using namespace std;


void Print(int arr[],int index,int size){
    if(index==size) return;
    cout<<arr[index]<<" ";
    Print(arr,index+1,size);
}


void PrintRev(int arr[],int index,int size){
    if(index==size) return;
    PrintRev(arr,index+1,size);
    // cout<<index<<" ";
    cout<<arr[index]<<" ";
}

void Print_normal(int arr[],int index){
    
    if(index<0) return;

    Print_normal(arr,index-1);
    cout<<arr[index]<<" ";
}

void Print_Reverse(int arr[],int index){
    
    if(index<0) return ;

    cout<<arr[index]<<" ";
    Print_Reverse(arr,index-1);
}

int main()
{
    int arr[5]={1,2,3,4,5};

    //NORMAL
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    
    // normal print recurion
    // Print(arr,0,5);
    // cout<<endl;
    
    // reverse  print recurion
    // PrintRev(arr,0,5);
    // cout<<endl;

    //using only 2 arguments

    Print_normal(arr,4);
    cout<<endl;
    Print_Reverse(arr,4);
}
