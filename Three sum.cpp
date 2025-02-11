#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) 
{
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size()-2;i++)
	{
		if(i!=0 && arr[i]==arr[i-1])
			continue;
		int target = K-arr[i];
		int front = i+1;
		int back = n-1;
		while(front<back)
		{
			int sum = arr[front] + arr[back];
			if(sum>target)
				back--;
			else if(sum<target)
				front++;
			else
			{
				ans.push_back({arr[i],arr[front],arr[back]});
				front++;
				back--;
				while(front<back && arr[front]==arr[front-1]) j++;
				while(front<back && arr[back]==arr[back+1]
				)
			}
		}	
	}	
	return ans;
}
