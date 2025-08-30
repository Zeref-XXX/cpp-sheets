#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr = {2, 8, -14, 2, 4, 10};
	int k = 10;
	int len = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		int sum = 0;
		for (int j = i; j < arr.size(); j++)
		{
			sum+=arr[j];
			if(sum==k){
				len=max(len,j-i+1);
			}	
		}
	}
	cout << len << endl;
	return 0;
}