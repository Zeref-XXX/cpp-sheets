#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr = {-5, 8, -14, 2, 4, 12};
	int k = -5;
	int len = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = i; j < arr.size(); j++)
		{
			int sum = 0;
			for (int k = i; k < j; k++)
			{
				sum += arr[k];
				if (sum == k)
					len = max(len, j - i + 1);
			}
		}
	}
	cout << len << endl;
	return 0;
}