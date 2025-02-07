#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	vector<int> ans;
	int i=0, j=0;
	while(i<n && j<m)
	{
		if(a[i] == b[j])
		{
			ans.push_back(a[i]);
			i++;
			j++;
		}
		else if(a[i] < b[j])
			i++;
		else
			j++;
		return ans;		
	}
}
