#include <bits/stdc++.h>
using namespace std;
int findMax(int *arr, int n)
{
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int findMin(int *arr, int n)
{
    int mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}
bool countPrime(int n)
{
    int isprime = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (n != 1 && isprime == 1)
        return true;
    else
        return false;
}
bool countPallindrome(int n)
{
    string s = to_string(n);
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp)
        return true;
    else
        return false;
}
int maxDivisors(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int palli = 0, prime = 0;
    cout << "The maximum number : " << findMax(arr, n) << endl;
    cout << "The minimum number : " << findMin(arr, n) << endl;
    for (int i = 0; i < n; i++)
    {
        if (countPallindrome(arr[i]))
            palli++;
        if (countPrime(arr[i]))
            prime++;
    }
    int maxi = maxDivisors(arr[0]);
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(maxDivisors(arr[i])==maxi)
        {
            ans = max(ans,arr[i]);
        }
        if (maxDivisors(arr[i]) > maxi)
        {
            maxi = maxDivisors(arr[i]);
            ans = arr[i];
        }
    }
    cout << "The number of prime numbers : " << prime << endl;
    cout << "The number of palindrome numbers : " << palli << endl;
    cout << "The number that has the maximum number of divisors : " << ans << endl;
}