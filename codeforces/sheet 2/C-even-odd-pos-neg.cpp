// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given N numbers. Count how many of these values are even, odd, positive and negative.

// Input
// First line contains one number N (1 ≤ N ≤ 103) number of values.

// Second line contains N numbers (-105 ≤ Xi ≤ 105).

#include<stdio.h>
int main(){
    int n,even,odd,positive,negative;
    even= odd=positive=negative =0;
    // printf("Enter :  ");
    scanf("%d",&n);
    // printf("%d \n",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        
        if(a[i]%2==0)
        even++;
        else
        odd++;
        
        if(a[i]>0)
        positive++;
        else if(a[i]<0)
        negative++;
    }
    printf("Even : %d\n",even);
    printf("Odd  : %d\n",odd);
    printf("positive : %d\n",positive);
    printf("negative : %d\n",negative);
    return 0;
}