#include <bits/stdc++.h>
using namespace std;

// void pattern1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }cout<<endl;
//     }
// }

// void pattern2(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//                 for(int j=0;j<i;j++){
//                     cout<<"* ";
//                 }cout<<endl;
//     }
// }

// void pattern3(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//                 for(int j=0;j<=i;j++){
//                     cout<<j+1;
//                 }cout<<endl;
//     }
// }

// void pattern4(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//                 for(int j=0;j<=i;j++){
//                     cout<<i+1;
//                 }cout<<endl;
//     }
// }

// void pattern5(int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         for (int j = n-i; j > 0; j--)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void pattern6(int n)
// {
//     for (int i=n;i>0;i--)
//     {
//         for (int j =0 ; j <i; j++)
//         {
//             cout << j+1;
//         }
//         cout << endl;
//     }
// }

void pattern7(int n)
{
   for(int i=1;i<=n;i++){
    for(int j=n-1;j>0;j--){
        cout<<" ";
    }
    for(int k=1;k<i+1;k++){
        cout<<"*";
    }
    cout<<endl;
   }
}

int main()
{
    int n;
    cin >> n;
    pattern7(n);
    return 0;
}